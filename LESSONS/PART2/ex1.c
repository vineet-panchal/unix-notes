/*Source:  FindLtr.c
  Purpose: output occurrences of A,B,...Z found in input
  Input:   chars from stdin
  Output:  each upper case letter and its occurencs
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) {
  int LTRS=26,                          //number of A,B,...Z
      i,                                //index
      c,                                //char from stdin
      letter[LTRS];                     //array for upper case letters

  for (i=0;i<LTRS;i++) letter[i]=0;     //initialize array to zeros

  while((c=getchar()) != EOF)           //^d on Linux (end of input)
    if (isupper(c)) ++letter[c - 'A'];  //increment right slot

  for (i=0; i<LTRS; ++i) {              //print results
    if (i%6 == 0) printf("\n");         //new line every 6 chrs
    printf("%5c: %4d", 'A'+i, letter[i]);
  }
  printf("\n\n");
  exit(0);
}