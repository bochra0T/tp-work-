// Create a structure called myStructure
#include <stdio.h>
typedef  struct {
  int myNum;
  char myLetter;
}myStructure;

int main() {

  myStructure s1;
  s1.myNum = 13 ;
  s1.myLetter = 'B';

  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}