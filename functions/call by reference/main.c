/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fun(int*, int*);
void main()
{
	int x = 5, y = 7;
    	fun(&x, &y);
    	printf("Inside main (calling function)\n");
    	printf("x = %d  y = %d\n", x, y);
}

void fun(int *x, int *y)
{
    	*x = 7;
    	*y = 5;
    	printf("Inside fun (called function)\n");
    	printf("x = %d  y = %d\n", *x, *y);
}