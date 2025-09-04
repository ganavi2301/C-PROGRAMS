/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

****************************************************************************/

#include<stdio.h>
void display();
void main()
{ 
	display();
	display();
}
void display()
{
	static int x;
	x=x+10;
	printf("\n x is %d",x);
}
