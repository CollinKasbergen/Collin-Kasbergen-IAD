#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetVerticalSync(true);

    bSendSerialMessage = false;
    ofBackground(255);
    ofSetLogLevel(OF_LOG_VERBOSE);

    font.loadFont("DIN.otf", 64);

    serial.listDevices();
    vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();

    // this should be set to whatever com port your serial device is connected to.
    // (ie, COM4 on a pc, /dev/tty.... on linux, /dev/tty... on a mac)
    // arduino users check in arduino app....
    int baud = 9600;
    serial.setup(0, baud); //open the first device
    //serial.setup("COM4", baud); // windows example
    //serial.setup("/dev/tty.usbserial-A4001JEC", baud); // mac osx example
    //serial.setup("/dev/ttyUSB0", baud); //linux example
    nBytesRead = 0;
    readTime = 0;
    memset(bytesReadString, 0, 1);


    for(int i=0; i<VOICES; i++)
    {
        voicePaused[i] = true;

        ofLogNotice() << "Loading voice" << i << endl;
        voicePlayer[i].loadSound("vox"+ofToString(i+1)+".wav");
        voicePlayer[i].setLoop(true);

        //voicePlayer[i].setVolume(0);
        voicePlayer[i].play();
        voicePlayer[i].setPaused(true);
    }

    ofSoundSetVolume(0.2);
}

//--------------------------------------------------------------
void ofApp::update()
{
    // (2) read
    // now we try to read 3 bytes
    // since we might not get them all the time 3 - but sometimes 0, 6, or something else,
    // we will try to read three bytes, as much as we can
    // otherwise, we may have a "lag" if we don't read fast enough
    // or just read three every time. now, we will be sure to
    // read as much as we can in groups of three...
    if(serial.available() > 15)
    {
        nBytesRead = 0;
        int nRead  = 0;  // a temp variable to keep count per read

        unsigned char bytesReturned[1];

        memset(bytesReadString, 0, 1);
        memset(bytesReturned, 0, 1);

        while( (nRead = serial.readBytes( bytesReturned, 1)) > 1)
        {
            nBytesRead = nRead;
        };


        //cout << bytesReturned;

        int currentbyte = 1;

        if(ofToString(bytesReturned) == "1")
        {
            soundon = true;
        }
    }
    if(soundon)
    {
        cout << "soundon";
        int randomaudio = ofRandom(VOICES);
        voicePaused[randomaudio] = false;
        voicePlayer[randomaudio].setPaused(voicePaused[randomaudio]);
        soundon = false;
    }
    for(int i=0; i<VOICES; i++)
    {
        if(voicePlayer[i].getPosition() > 0.99 )
        {
            cout << "soundoff";
            voicePaused[i] = true;
            voicePlayer[i].setPaused(voicePaused[i]);
            voicePlayer[i].setPosition(0.0);
            soundoff = false;
        }
    }


    float time = ofGetElapsedTimef();

    float x = time*0.1 + 30;
    for(int i=0; i<VOICES; i++)
    {
        float y = i * 0.2;
        float volume = ofNoise(x,y);
        voicePlayer[i].setVolume(volume);
    }
    ofSoundUpdate();




}

//--------------------------------------------------------------
void ofApp::draw()
{

    ofSetColor(220);
    string msg;
    msg += "read: " + ofToString(bytesReadString) + "\n";
    font.drawString(msg, 50, 100);

}
