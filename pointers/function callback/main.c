/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sum (int a, int b) 
{
	printf("sum="%d\n", a+b);
}
void sub (int a, int b) 
{
	printf("sub="%d\n", a-b);
}
void display (void (*fptr) (int,int))
{
	fptr (5,1);
}
void main()
{
	display (sum);
	display (sub);
}

