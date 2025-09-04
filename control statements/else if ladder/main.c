/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("Entered char is lowercase");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("Entered char is uppercase");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Entered char is digit");
	}
	else	
	{
		printf("Entered char is special character or symbol");
	}
	return 0;
}