/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct student
{
    	int rollno;
    	char name[20];
    	float marks;
};
void main()
{
    	struct student s1 = {1, "Ayesha", 90};
    	struct student s2 = {2, "Akshay", 92};
	printf("info for s1");
    	printf("\n %d %s %f",s1.rollno,s1.name,s1.marks);
   	printf("\n info for s2");
    	printf("\n %d %s %f",s2.rollno,s2.name,s2.marks);
}

