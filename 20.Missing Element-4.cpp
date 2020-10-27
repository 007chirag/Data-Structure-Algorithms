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
	int i,n,l,h;
	int H[20];
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
	l=arr.A[0];
	h=arr.A[arr.length-1];
	for(i=0;i<n;i++)
	H[arr.A[i]]++;
	
	for(i=l;i<h;i++)
	{
		if(H[i]==0)
		printf("\nMissing Elements : %d \n",i);
	}
	return 0;
}
