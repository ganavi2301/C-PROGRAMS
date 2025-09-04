/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float *arr;
	arr=(float*)malloc(10*size of (float));
	if(arr==NULL)
	{
		printf("Memory not allocated:\n");
		return1;
	}
	for(int i=0;i<10;i++)
	{
		printf("Enter value %d:",i+1);
		scanf("%f", & arr[i]);
	}
	printf("You entered:");
	for(int i=0;i<10;i++)
	{
		printf("%f",arr[i]);
	}
	free(arr);
	return 0;
}