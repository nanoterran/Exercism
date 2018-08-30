
#include "isogram.h"
#include "string.h"
#include "stdio.h"
#include "ctype.h"

bool is_isogram(const char phrase[]){

  bool isIso = true;
  int currentPosition = 0;

  for (int index = 0; index < (int)strlen(phrase); index++)
  {
    //gets letters to compare
    char currentChar = tolower(phrase[currentPosition]);
    char nextChar = tolower(phrase[index+1]);

    if (nextChar != ' ' && nextChar != '-'){
      //strcasecmp (&current, &next) == 0
      if (currentChar == nextChar) {
        isIso = false;
        break;
      }
    }

    if (index == ((int)strlen(phrase) - 1)) {
      index = currentPosition;
      currentPosition++;
    }
  }

  return isIso;
}
