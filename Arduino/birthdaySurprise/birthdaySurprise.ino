#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523

#define NOTES 7

void setTone(int,int);  
const int notes[NOTES]={NOTE_C4,NOTE_C4,NOTE_D4,NOTE_C4,NOTE_F4,NOTE_E4,0};
const int beats[NOTES]={1,1,2,2,2,4,3};
const int beat_length=300;

#define SPEAKER 7
#define PIR 8

void setup()
{
  pinMode(SPEAKER,OUTPUT);
  pinMode(PIR,INPUT);
}

void loop()
{
  if(digitalRead(PIR)==HIGH){  
    for(int i=0;i<NOTES;i++){
      if(notes[i]==0)
        delay(beats[i]*beat_length);
       else
        setTone(notes[i],beats[i]*beat_length);
       noTone(SPEAKER);
       delay(beat_length/2); 
    }
  }
  else
    noTone(SPEAKER);
}

void setTone(int freq,int dur)
{
  tone(SPEAKER,freq,dur);
  delay(dur);
}
