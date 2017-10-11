/*

*/
int outPin = 4;

int noteLowCsharp = 554;
int noteD = 587;
int noteE = 659;
int noteF = 699;
int noteFsharp = 740;
int noteG = 784;
int noteA = 880;
int noteBflat = 932;
int noteB = 988;
int noteC = 1047;
int noteCsharp = 1109;
int noteHighD = 1175;
int noteHighE = 1319;

float beatsPerMin = 1;

int wholeNote = 1000;
int halfNote = 500;
int quartNote = 250;
int dotHalf = 750;
int dotQuart = 375;
int extraWhole = 1250;
int eightNote = 125;
int fiveBeats = 1250;
int fourAndHalfBeats = 1125;

void setup() {
  // nothing happens in setup
}

void loop() {
  pickup();
  verse();
  firstEnding();
  verse();
  secondEnding();

  noTone(outPin);
  delay(5000);
}

void secondEnding() {

  
  playNote(noteA, dotHalf);
  playNote(noteD, quartNote);
  playNote(noteF, halfNote);
  playNote(noteE, halfNote);
  playNote(noteD, wholeNote);
  
}

void firstEnding() {
  playNote(noteA, dotHalf);
  playNote(noteD, quartNote);
  playNote(noteLowCsharp, dotHalf);
  playNote(noteD, quartNote);
  playNote(noteE, fourAndHalfBeats);
  playNote(noteE, dotQuart);
  playNote(noteF, quartNote);
  playNote(noteG, quartNote);
}

void pickup() {
  playNote(noteD, quartNote);
  playNote(noteE, quartNote);
  playNote(noteF, quartNote);
}

void verse() {
  playNote(noteA, dotHalf);
  playNote(noteG, quartNote);
  playNote(noteF, dotQuart);
  playNote(noteE, eightNote);
  playNote(noteD, quartNote);
  playNote(noteE, eightNote);
  playNote(noteF, fiveBeats);
  playNote(noteF, eightNote);
  playNote(noteG, quartNote);
  playNote(noteA, quartNote);
  playNote(noteC, dotHalf);
  playNote(noteBflat, quartNote);
  playNote(noteA, quartNote);
  playNote(noteG, eightNote);
  playNote(noteF, quartNote);
  playNote(noteG, eightNote);
  playNote(noteA, fiveBeats);
  playNote(noteA, dotQuart);
  playNote(noteB, quartNote);
  playNote(noteCsharp, quartNote);
  playNote(noteHighE, quartNote);
  playNote(noteHighD, halfNote);
  playNote(noteA, quartNote);
  playNote(noteC, quartNote);
  playNote(noteBflat, halfNote);
  playNote(noteD, quartNote);
  playNote(noteE, fourAndHalfBeats);
  playNote(noteE, dotQuart);
  playNote(noteF, quartNote);
  playNote(noteG, quartNote);
}

void playNote(int x, int y) {
  tone(outPin, x);
  delay(y/2);
  noTone(outPin);  
  delay(y/2);
}

