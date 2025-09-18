/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
	sum();
}
void sum()
{
	int a,b,sum=0;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d\n",sum)
}
