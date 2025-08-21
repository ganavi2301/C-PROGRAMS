//Program to print an array element
#include<stdio.h>
void main()
{	
	int a[5],i;
	printf("Enter the array:");
	for(i=0;i<5;i++)
	printf("\n array element index is %d:%d",i,a[i]);
}

//Program to read marks of 5 students and calculate its sum and average using arrays
#include<stdio.h>
int main()
{	
	int marks[5];
	int sum=0;
	float avg;
	printf("Enter marks of 5 students:\n");
	for(int i=0;i<5;i++)
	{
		printf("Student %d:",i+1);
		scanf("%d",&marks[i]);
		sum+=marks[i];
	}
	avg=sum/5.0;
	printf("Total sum=%d\n",sum);
	printf("Avg=%f\n",avg);
	return 0;
}

//Program to print matrix and its transpose
#include<stdio.h>
int main()
{	
	int a[2][3],i,j;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}