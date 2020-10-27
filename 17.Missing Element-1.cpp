#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int length;
	int size;
};

void display(struct array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.A[i]);
}

int main()
{
	struct array arr;
	int i,n,s=0,sum;
	printf("Enter Size of array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(sizeof(int)*arr.size);
	arr.length=0;
	
	printf("\nEnter The No Of array Elements You Want to Enter\n");
	scanf("%d",&n);
	arr.length=n;
	
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr.A[i]);
	
	display(arr);
	sum=n*(n+1)/2;
	
	for(i=0;i<n;i++)
	s=s+arr.A[i];
	
	printf("\nMissing Element in First n Natural No array Series : %d\n",sum-s);
	return 0;
}
