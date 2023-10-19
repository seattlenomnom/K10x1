/* source file for k10x1
 *
*/

/* includes */
#include <stdio.h>
#include <stddef.h>


/* defines */


/* structure defines */


/* function declarations */

void printArray(int *a, int numElements);
void sort(int *a, int size);


/* main */

int main(int argc, char *argv[]){

    int a[] = {-20, 5, 100, 33, 24, 44, -15, -45, 200, 24, 48, 39, -45, 14, 76,
        55};
    const int numInts = 16;

    printArray(a, numInts);
    sort(a, numInts);
    printArray(a, numInts);

    return(0);
}

/* function definitions */

void printArray(int *a, int numElements){
    int *p2a;
    int const *arrayEnd = a + numElements;

    p2a = a;
    while(p2a < arrayEnd){
        printf("%i ", *p2a++);
    }
    printf("\n");

}

void sort(int *a, int size){

    int i;            /* outer index */
    int j;            /* inner index */
    int temp;         /* temporary */

   for(i = 0; i < size - 1; ++i)
      for(j = i + 1; j < size; ++j)
         if(*(a + i) > *(a + j)){
            temp = *(a + i);
           *(a + i) = *(a + j);
          *(a + j) = temp;
         }
}







