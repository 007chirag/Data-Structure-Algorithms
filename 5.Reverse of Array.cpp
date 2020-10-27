#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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

void reverse1(struct array *arr)
{
	int *B;
	int i,j;
	B=(int *)malloc(sizeof(int)*arr->length);
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	B[j]=arr->A[i];
	
	for(i=0;i<arr->length;i++)
	arr->A[i]=B[i];
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void reverse2(struct array *arr)
{
	int i,j;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	swap(&arr->A[i],&arr->A[j]);
}

int main()
{
	int i,n;
	struct array arr;
	printf("Enter Size of Array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(sizeof(int)*arr.size);
	arr.length=0;
	
	printf("\nEnter the Length of Array\n");
	scanf("%d",&n);
	arr.length=n;
	
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr.A[i]);
	
	display(arr);
	printf("\nReversing Array using Method-1\n");
	reverse1(&arr);
	display(arr);
	printf("\nReversing Array using Method-2\n");
	reverse2(&arr);
	display(arr);
	return 0;
}
