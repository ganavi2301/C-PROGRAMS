/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum (int, int);
void main ( )
{
	int s = 0;
	int (*ptr) (int,int)= & sum;
	s= (*ptr) (2,3);
	printf("%d", s);
}
int sum (int a, int b)
{
	return a+b;
}
