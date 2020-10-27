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

void merge(struct array *arr1,struct array *arr2)
{
	int i=0,j=0,k=0;
	struct array *arr3=(struct array *)malloc(sizeof(struct array));
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
		arr3->A[k++]=arr1->A[i++];
		else
		arr3->A[k++]=arr2->A[j++];
	}
	for(;i<arr1->length;i++)
	arr3->A[k++]=arr1->A[i];
	for(;j<arr2->length;j++)
	arr3->A[k++]=arr2->A[j];
	
	arr3->length=arr1->length+arr2->length;
	arr3->size=arr1->size+arr2->size;
	printf("\nArray After Merge\n");
	for(k=0;k<arr3->length;k++)
	printf("%d ",arr3->A[k]);
}

int main()
{
	int i,n;
	struct array arr1,arr2;
	struct array *arr3=(struct array *)malloc(sizeof(struct array));
	printf("Enter Size of Array\n");
	scanf("%d %d",&arr1.size,&arr2.size);
	arr1.A=(int *)malloc(sizeof(int)*arr1.size);
	arr2.A=(int *)malloc(sizeof(int)*arr2.size);
	arr1.length=0;
	arr2.length=0;
	
	printf("\nEnter the no of array Elements\n");
	scanf("%d",&n);
	arr1.length=n;
	arr2.length=n;
	
	printf("\nEnter Elements in Array-1\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr1.A[i]);
	
	printf("\nEnter Elements in Array-2\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr2.A[i]);
	
	display(arr1);
	display(arr2);
	merge(&arr1,&arr2);
	return 0;
	
}
