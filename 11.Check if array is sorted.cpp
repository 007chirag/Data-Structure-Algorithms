#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct array 
{
	int *A;
	int size;
	int length;
};

void display(struct array arr)
{
	int i;
	printf("\nArray Elements\n");
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.A[i]);
}

int issorted(struct array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]>arr.A[i+1])
		return 0;
	}
	return 1;
}

int main()
{
	int n,i,x;
	struct array arr;
	printf("Enter Size of Array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(sizeof(int)*arr.size);
	arr.length=0;
	
	printf("\nEnter No of Array Elements\n");
	scanf("%d",&n);
	arr.length=n;
	
	printf("\nInput Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr.A[i]);
	display(arr);
	x=issorted(arr);
	switch(x)
	{
		case 1:printf("\nArray is sorted\n");
				break;
				
		case 0:printf("\nArray is unsorted\n");
				break;
				
		default: printf("Invalid");
	}
	return 0;
}
