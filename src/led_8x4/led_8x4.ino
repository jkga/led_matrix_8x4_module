//74HC595N pins
#define latchPin 8
#define dataPin 11
#define clockPin 12

//vertical pins
#define row1Pin 4
#define row2Pin 5
#define row3Pin 6
#define row4Pin 7

const char pins[] = {
  row1Pin,
  row2Pin,
  row3Pin,
  row4Pin
};


//characters in binary
unsigned int charA[4][8] = {
  {0,0,0,1,1,0,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charB[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,1,1,0,0},
  {0,0,1,1,0,1,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned  int charC[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charD[4][8] = {
  {0,0,1,1,1,0,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,0,0,0}
};

unsigned int charE[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charF[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,0,0,0}
};

unsigned int charG[4][8] = {
  {0,0,0,1,1,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,0,1,1,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charH[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charI[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charJ[4][8] = {
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charK[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,0,0,0},
  {0,0,1,0,1,0,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charL[4][8] = {
  {0,0,1,0,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charM[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charN[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,0,1,0,0},
  {0,0,1,0,1,1,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charO[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charP[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,1,0,0,0,0,0}
};

int charQ[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,1,1,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charR[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,1,1,0,0},
  {0,0,1,1,1,0,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charS[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,0,1,1,1,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charT[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0}
};

unsigned int charU[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charV[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,0,1,1,0,0,0}
};

unsigned int charW[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charX[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,1,0,0,1,0,0}
};

unsigned int charY[4][8] = {
  {0,0,1,0,0,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0}
};

int charZ[4][8] = {
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,1,1,1,1,0,0}
};

unsigned int charHeart[4][8] = {
  {0,1,1,0,0,1,1,0},
  {0,1,1,1,1,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,1,1,0,0,0}
};


unsigned int board8x4[4][8] = {
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}
};

int binToDec (char *bin) {
   int decVal = 0;
    for (int i=0; i< strlen(bin); i++)
    {
      decVal *= 2;
      if (bin[i] == '1') decVal++;
    }
    return decVal;
}

char* join(int *chars) {
  char* dd = malloc(1);
  char buffer[8];
  for(int x = 0; x < 8; x++) {
    sprintf(buffer, "%d", chars[x]);
    strcat(dd, buffer);
  }
  return dd;
}

int currentRow = 0;
int currentDisplayColumIndex = 0;

unsigned long startMillis;
unsigned long currentMillis;
const unsigned long period = 100;


int displaySingleLetter (int character[][8]) {

    for (int row = 0; row < 4; row++) {

      digitalWrite(latchPin, LOW);
      
      //join array and convert to decimal value
      char *charByte = join(character[row]);
      int val = binToDec(charByte);

      // shift out the bits:
      shiftOut(dataPin, clockPin, LSBFIRST, val);
      //take the latch pin high so the LEDs will light up:
      digitalWrite(latchPin, HIGH);

      //freeup memory
      free(charByte);
        
      //disable y axis
      for(int x = 0; x < 4; x++) {
        if(x != currentRow) {
          pinMode(pins[x], INPUT);
        } else {
          pinMode(pins[currentRow], OUTPUT);
          digitalWrite(pins[currentRow], LOW);
        }
      }
      
      //point to next line 
      currentRow++;
         
      // reset row to zero if reached 4 lines
      if(currentRow >= 4 ) currentRow = 0;
      
      // pause before next row
      delay(5);
    }
    return 0;
}

int writeToColumn8x4Board(int board[4][8], int pos, int rowBits[4]) {

   for(int y = 0; y < 4; y++) {
     // write new data
      board[y][pos] = rowBits[y];
   }
   return 1;
}

int shift8x4BoardToLeft(int board[4][8]) {
   for(int y = 0; y < 4; y++) {
    int temp;
    int next = 0;
    for(int z = 0; z < 8; z++) {
      next = z+1;
      // write new data
      if(next <= 7) {
        temp = board[y][next];
        board[y][z] = temp;
      }
    }
   }
   return 1;
}

int* getColumnOf8x4Character(int chars[4][8], int columnPos) {
  static int rows[4]={0,1,1,0};
  for(int x=0; x < 4; x++) {
    for(int j=0; j<8; j++) {
      if(j==columnPos) rows[x] = chars[x][j];
    }
  } 
  return rows;
}

void setup() {
  //set pins to output
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  
  //set pins to high impedance
  pinMode(row1Pin, INPUT);
  pinMode(row2Pin, INPUT);
  pinMode(row3Pin, INPUT);
  pinMode(row4Pin, INPUT);
  startMillis = millis();
}


int letterIndex = 0;

int scrollText(int board8x4, int letters[], int letterCount, int columnCount) {
  int *bits = malloc(1);
  currentMillis = millis();

  if (currentMillis - startMillis >= period)
  {
    //use current time as start time
    startMillis = currentMillis;
    currentDisplayColumIndex++;
    free(bits);

    //point the cursor to the first element in the array of letters
    if(currentDisplayColumIndex > columnCount - 1) {
      letterIndex++;
      currentDisplayColumIndex = 0; 
    }
    if(letterIndex > letterCount - 1) letterIndex = 0;

    shift8x4BoardToLeft(board8x4);
  }

  bits= {getColumnOf8x4Character(letters[letterIndex], currentDisplayColumIndex)};
  int reversedColumnIndex = 7-currentDisplayColumIndex;
  writeToColumn8x4Board(board8x4, 7, bits); 
  displaySingleLetter(board8x4);
}

/*const int letters[] = {
  charA,
  charB,
  charC,
  charD,
  charE,
  charF,
  charG,
  charH,
  charI,
  charJ,
  charK,
  charL,
  charM,
  charN,
  charO,
  charP,
  charQ,
  charR,
  charS,
  charT,
  charU,
  charV,
  charW,
  charX,
  charY,
  charZ,
  charHeart
};*/


  
void loop() {const int letters[] = {
  charL,
  charO,
  charV,
  charE,
  charHeart
};
  scrollText(board8x4, letters, sizeof(letters) / sizeof(int), 8);
}
