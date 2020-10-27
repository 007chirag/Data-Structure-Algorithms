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

int get(struct array arr,int index)
{
	if(index>=0 && index<=arr.length)
	return arr.A[index];
	return -1;
}

void set(struct array *arr,int index,int x)
{
	if(index>=0 && index<=arr->length)
	arr->A[index]=x;
}

int max(struct array arr)
{
	int i;
	int max=arr.A[0];
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		max=arr.A[i];
	}
	return max;
}

int min(struct array arr)
{
	int i,min=arr.A[0];
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]<min)
		min=arr.A[i];
		
	}
	return min;
}

int sum(struct array arr)
{
	int s=0,i;
	for(i=0;i<arr.length;i++)
	s=s+arr.A[i];
	return s;
}

float avg(struct array arr)
{
	return (float)sum(arr)/arr.length;
}

int main()
{
	int i,n,x;
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
	
	printf("\nDesired Element : %d\n",get(arr,4));
	set(&arr,6,6);
	display(arr);
	printf("\nMax Element in array : %d\n",max(arr));
	printf("\nMin Element in array : %d\n",min(arr));
	printf("\nSum of Element in array : %d\n",sum(arr));
	printf("\nAvg of Element in array : %f\n",avg(arr));
	return 0;
}
