### Les 2

1. Bij Bounce, Houdt een willekeurige knop in voor meer objecten. Alle tussen stappen zijn verloren gegaan omdat ik in hetzelfde project heb doorgewerkt.
2. Een array heeft een vooraf gedefinieerd aantal posities, array[100]. Een vector kan dynamisch aan toegevoegd worden, Vector.push_back(1);. 

2. Ik zou gebruik maken van een webcam in combinatie met OpenCV(ofxCv) en een arduino met een electrische waterafsluiter. 

http://hackerstore.nl/Artikel/652
https://www.youtube.com/watch?v=aGmGyFLQAFM

Ik zou OpenCV uit het webcam beeld de positie van de toeschouwer zijn oog en pupil laten analyseren. Als de positie van de pupil een vooraf gedefinieerd punt bereikt, wat afhangt van de hoek waarin de webcam op de toeschouwer gericht staat, zou ik de arduino(eventueel via Firmata) opdracht geven om de afsluiter uit te zetten. 

1. Haal beeld uit webcam
2. Bereken positie van oog en pupil(tweemaal)
3. Kijk naar verschil in pupil, oog en afbeelding
4. If(oog == sweetspot){
5. water();
6. }
