/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct student{
	int roll;
	char name[50];
	float marks;
};
int main()
{
	int n;
	printf("Enter number of students:");
	scanf("%d",&n);
	struct student *s=(struct student*)malloc(n*size of (struct student));
	if(s==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i=0; i<n; i++) 
	{
	printf ("\n Enter details for student %d:\n", i+1);
	printf (" Roll number: ");
	scanf("%d", & (s+i) -> roll);
	printf ("Name: ");
	scanf("%s", (s+i)-> name);
	printf("Marks: ");
	scanf ("%f", & (s+i)->marks);
	}
	printf ("\n Student details: \n");
	for (int i=0; i<n;i++)
	{
	printf("\n Student %d\n", i++);
	printf("Roll: % .d\n", (s+i) ->roll);
	printf ("Name: %s\n", (s+i) ->name); 
	printf(" Marks: %f\n", (s+i) ->marks);
	}
	free (s);
	return 0;
}