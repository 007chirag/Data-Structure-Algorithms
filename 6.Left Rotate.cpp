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

void leftrotate(struct array *arr)
{
	int i,temp;
	temp=arr->A[0];
	for(i=0;i<arr->length;i++)
	arr->A[i]=arr->A[i+1];
	arr->A[arr->length-1]=temp;
}

int main()
{
	int n,i;
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
	
	printf("\nLeft Rotate\n");
	leftrotate(&arr);
	display(arr);
	return 0;
}
