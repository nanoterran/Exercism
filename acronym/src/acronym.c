#include "acronym.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

char *abbreviate(const char *phrase)
{
  //allocates memory for the abreviation
  char *acronym = calloc(1, 100);

  int count = 0;

  //checks whether the phrase is empty
  if (phrase == NULL || (strcmp(phrase, "") == 0))
  {
    acronym = NULL;
  }
  else
  {
    acronym[count] = toupper(*(phrase+0));
    count++;

    //traverse the string character by character
    for (unsigned long index = 1; index < strlen(phrase); index++)
    {
       char current = phrase[index];

       if (current == ' ' ||  current == '-')
       {
         acronym[count] += toupper(phrase[index+1]);
         count++;
       }
     }
  }

  return acronym;
}
