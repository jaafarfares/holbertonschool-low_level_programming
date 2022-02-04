#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function maqin goes there */
int main(void)
{	
	int n;
	int LD;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lD = n % 10;
	if(LD > 5)
	  printf("Last digit of %d is %d and is greater than 5\n", (n), (LD));
	if else (LD = 0)
		  printf("Last digit of %d is %d and is 0\n", (n), (LD));
	if else(LD < 6 && LD ! = 0)
		 printf("Last digit of %d is %d and is less than 6 and not 0\n" , (n), (LD));
	return (0);
}
