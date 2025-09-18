/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	for(i=1;i<=5;i++)
	{
		printf("Enter the number");
		scanf("%d",&a);
		if(a<0)
		{
			break;
		}
	sum=sum+a;
	printf("%d",sum);
	}
}
