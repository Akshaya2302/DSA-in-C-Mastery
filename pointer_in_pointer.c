#include<stdio.h>
int main(){
	int age=19;
	int *a=&age;
	int **aa=&a;
	
	printf("Value:%d\n",age);
	printf("Address of pointer:%p\n",&age);
	printf("Pointer:%d\n",*a);
	
	printf("Pointer in pointer:%d\n",**aa);
}
