#include<stdio.h>
int main(){
	
	float result;
	float a, b;
	int choice;
	printf("Enter the value of 2 numbers:\n");
	scanf("%f %f",&a,&b);
	
	printf("Enter your Choice:\n");
	printf("1.Add 2.Sub 3.Multiplication 4.Division 5.Modulus(1. 2. 3. 4. 5.):\n");
	scanf(" %d",&choice);
	
	switch(choice)
	{
	
		case 1:
			result=a+b;
			printf("Addition:%f",result);
			break;
		case 2:
			result=a-b;
			printf("Substraction:%f",result);
			break;
		case 3:
			result=a*b;
			printf("Multiplication:%f",result);
			break;
		case 4:
			result=a/b;
			printf("Division:%f",result);
			break;
		case 5:
			result=(int)a%(int)b;
			printf("Modulus:%f",result);
			break;
			}
 }
