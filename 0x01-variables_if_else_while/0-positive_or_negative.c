#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return:Always 0.
 */
int main(void)
{
	int n;
	
	strand(time(0));
	n=rand() -RAND_max/2;
	/*your code goes there*/
	if (n>0)
	   printf("%d is positive\n",n);
	else if (n<0)
	   printf("%d is negative\n",n);
	else
	   printf("%d is zero\n", n);

	return(0);
}
