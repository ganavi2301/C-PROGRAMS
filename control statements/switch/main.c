/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
	float n1,n2,res;
	char op;
	printf("Enter first number:");
	scanf("%f",&n1);
	printf("Enter second number:");
	scanf("%f",&n2);
	printf("Enter an operator(+,-,*,/);");
	scanf("%c",&op);
	switch(op)
	{ 
	case '+';
	res=n1+n2;
	printf("res:%f\n",res);
	break;
	case '-';
	res=n1-n2;
	printf("res:%f\n",res);
	break;
	case '*';
	res=n1*n2;
	printf("res:%f\n",res);
	break;
	case '/';
	res=n1/n2;
	printf("res:%f\n",res);
	break;
}
