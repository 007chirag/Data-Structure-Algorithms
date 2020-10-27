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

void sortedinsert(struct array *arr,int x)
{
	int i=arr->length-1;
	if(arr->length==arr->size)
	return;
	
	while(i>=0 && arr->A[i]>x)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
	arr->length++;
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
	sortedinsert(&arr,6);
	display(arr);
	return 0;
}
