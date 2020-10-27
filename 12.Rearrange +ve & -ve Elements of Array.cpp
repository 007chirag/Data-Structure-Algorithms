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

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void rearrange(struct array *arr)
{
	int i=0,j=arr->length-1;
	while(i<j)
	{
		while(arr->A[i]<0)
		i++;
		while(arr->A[j]>=0)
		j--;
		if(i<j)
		swap(&arr->A[i],&arr->A[j]);
	}
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
	rearrange(&arr);
	display(arr);
	return 0;
}
