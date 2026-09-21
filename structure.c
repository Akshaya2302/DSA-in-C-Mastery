#include<stdio.h>
struct student
{
	float marks;
	int roll_no;
//	char name;
}s1,s2; //these s1 and s2 are the references

void Student()
{
	printf("Enter the values for the Struct\n");
	
	printf("Enter Roll number:");
	scanf("%d",&s1.roll_no);
	printf("Your Roll Number==%d\n",s1.roll_no);
	 	
	printf("Enter the marks of the student:");
	scanf("%2f",&s1.marks);
	printf("Your Marks==%f\n",s1.marks);
	return ;

}

void main()
{
	int n,i;
	printf("Enter How many times the loop should repeat:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("The %dth data\n",i);
		Student();	
	}
 	
 	
// 	printf("Enter the Name of the student:\n");
// 	scanf("%c",s1.name);
// 	printf("Name of the student is==%c",s1.name);
 	
	
}
