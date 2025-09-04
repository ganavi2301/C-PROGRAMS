/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
union abc 
{
    int a;
    char b;
    float c;
};
void main()
{
    union abc u;        
    union abc *ptr = &u;      
    u.a = 1;
    u.b = 'o';
    u.c = 78.90;
    printf("a value is: %d", ptr->a);
    printf("\n b value is: %c", ptr->b);
    printf("\n c value is :%f", ptr->c);
}