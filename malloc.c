#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i;
	printf("Enter Number of elements:");
	scanf("%d",&n);
	
	
	arr = (int*)malloc(n * sizeof(int));
	
	printf("Enter the %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	printf("The elements are: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
