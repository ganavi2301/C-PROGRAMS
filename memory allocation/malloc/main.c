/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("Enter total no of values:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*size of(int));
	printf("\n enter the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\n the entered values are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	free(ptr);
}
