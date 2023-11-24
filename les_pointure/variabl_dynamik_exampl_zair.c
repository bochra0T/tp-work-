#include <stdio.h>
#include <malloc.h>

int main() {
    int *p;

    // Allocating memory for an integer using malloc
    p = (int*) malloc(sizeof(int));

    // Assigning a value to the allocated memory
    *p = 5;
     // Printing the value stored in the allocated memory
      printf("\n%d \n", *p);
   
   //  ajoute un nouvel valure est crazzi 5 
     printf("entre ");
     scanf("%d",&*p);
     // Printing the value stored in the allocated memory
     printf("\n%d ",*p);
     //liberer la memory ca vu dire suprimi le variable dynamice 
     free (p);
     
    return 0;
}