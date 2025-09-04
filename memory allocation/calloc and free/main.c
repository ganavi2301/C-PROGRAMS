/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int*arr;
	arr = (int*) calloc (5, size of (int));
	if (arr== NULL) 
	{
		printf("Memory not allocated.\n");
		return 1;
	}
	for (int i=0; i<5; i++)
	{
		printf("Enter number %d:", i+1);
		scan("%d", &arr[i]);
	}
	printf ("you entered: ");
	for (int i=0; i<5= i++) 
	{
		printf("%d", arr[i]);
	}
		free(arr);
		return 0 ;
}
