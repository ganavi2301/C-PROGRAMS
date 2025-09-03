//Program to find the length of the string
#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	int count=0;i=0;
	printf("Enter name:");
	gets(name);
	while(name[i]!='\o');
	{
		count++;
		i++;
	}
	puts(name);
	printf("length of string is :%d",count);
}

//Program to concatenate two strings
#include<stdio.h>
#include<string.h>
void main()
{
	int len1,len2,i;
	char s1[30]="embedded";
	char s2[8]="geeks";
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<=len2;i++)
	{
		s1[len1+i]=s2[i];
	}
	printf("%s",s1);
}

//Program to reverse a string using strrev()
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter a string:");
	gets(str);
	strrev(str);
	printf("Reversed string:%s\n",str);
}

//Program to reverse a string without using strrev()
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i;
	printf("Enter a string:");
	scanf("%s",str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

//Program to compare two strings using strcmp()
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	int result;
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	result=strcmp(str1,str2);
	if(result==0)
	{
		printf("Both the strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
}

//Program to compare two strings without using strcmp()
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	int result,n;
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	printf("Enter how many characters to compare:");
	scanf("%d",&n);
	result=strncmp(str1,str2,n);
	if(result==0)
	{
		printf("First %d characters are equal\n");
	}
	else
	{
		printf("First %d characters are not equal",n);
	}
}

//Program to print length of the string and performing string concatenation
#include <stdio.h>
void modify (char[ ], char[ ]);
void main()
{
	char str 1 [] = "ayesha";
	char str 2[] = "Firdous";
	modify ( str 1, str 2);
}
void modify (char str 1[]), char str 2 [])
{
	int i, l=0,
	for (i=0; str 1(i) != '\0'; i++)
	{
  		l=l+1;
	}
	str 2 [1] = 'z'
	printf(" length of string 1 is: %d\n", l);
	printf("both the strings are: %s%s", str 1,str 2);
}


	


