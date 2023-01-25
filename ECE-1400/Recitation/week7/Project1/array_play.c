#include<stdio.h>
#include <stdlib.h>
int main(){

/* Single Dimention */

int *sdimen,i;
sdimen = malloc ( 10 * sizeof (int));
/* Access elements like single diminution. */
sdimen[0] = 10;
sdimen[1] = 20;

printf ("\n.. %d... %d ", sdimen[0], sdimen[1]);

/* Two dimention ie: **Array of pointers.**  */

int **twodimen;

twodimen = malloc ( sizeof ( int *) * 10);

for (i=0; i<10; i++) {
  twodimen[i] = malloc (sizeof(int) * 5);

}

/* Access array of pointers */

twodimen[0][0] = 10;
twodimen[0][3] = 30;
twodimen[2][3] = 50;

printf ("\n %d ... %d.... %d ", twodimen[0][0], twodimen[0][3], twodimen[2][3]);
return 0;
}