/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void display(int)
{
	if(n<1)
	return;
	else
	{
		printf("%d",n);
		display(n-1);
		printf("%d",n);
	}
}
void main()
{
	int n=3;
	display(n);
}
