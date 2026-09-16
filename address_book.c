#include<stdio.h>
int main(){
	int age1=10,age2=15, age3=20;
	int *a=&age1;
	int *b=&age2;
	int *c=&age3;
	
	printf("Value:%d\n",age1);
	printf("Address:%p\n",&age1);
	printf("Pointer:%d\n",*a);
	printf("Value of age2:%d\n",age2);
	printf("Address of age2:%p\n",&age2);
	printf("Pointer of age2:%d\n",*b);
printf("Value of age3:%d\n",age3);
	printf("Address of age3:%p\n",&age3);
	printf("Pointer of age2:%d\n",*c);
}
