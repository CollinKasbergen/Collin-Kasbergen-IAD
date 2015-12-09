#pragma once

#include "ofMain.h"

#define VOICES 6


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofTrueTypeFont		font;

		bool		bSendSerialMessage;			// a flag for sending serial
		char		bytesRead[3];				// data from serial, we will be trying to read 3
		char		bytesReadString[4];			// a string needs a null terminator, so we need 3 + 1 bytes
		int			nBytesRead;					// how much did we read?
		int			nTimesRead;					// how many times did we read?
		float		readTime;					// when did we last read?

		ofSerial	serial;

		ofSoundPlayer voicePlayer[VOICES];
		bool voicePaused[VOICES];

		bool soundon;
		bool soundoff;

		int randomaudio;

		int currentbyte;

};
