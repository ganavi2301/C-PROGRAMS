/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
	int a=18,b=9,c,d,e=10,f=a>b>d<c;
	c=b++;					//c=9,b=10
	d=b;					
	printf("%d\n",a<b<c>d);			//0
	printf("%d\n,b==e);			//1
	prinf("%d\n",c+1>e);			//0
	printf("%d\n",a+c==b>e<c+d);		//1
	printf("%d\n",f!=1);			//0
	printf("%d\n",a+c==b>=c<c+d!=1);	//1
} 
