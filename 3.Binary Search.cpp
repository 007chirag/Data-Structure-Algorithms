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

int BinarySearch(struct array arr,int key)
{
	int i,l,h,mid;
	l=0;
	h=arr.length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.A[mid])
		return mid;
		else if(key<arr.A[mid])
		h=mid-1;
		else
		l=mid+1;
	}
	return -1;
}

int RBS(struct array arr,int l,int h,int key)
{
	int mid;
	if(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.A[mid])
		return mid;
		else if(key<arr.A[mid])
		return RBS(arr,l,mid-1,key);
		else
		return RBS(arr,mid+1,h,key);
	}
	return -1;
}

int main()
{
	int i,n,x;
	struct array arr;
	printf("Enter Size of Array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(sizeof(int)*arr.size);
	arr.length=0;
	printf("Enter No of Array Elements\n");
	scanf("%d",&n);
	arr.length=n;
	
	printf("Enter Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr.A[i]);
	
	display(arr);
	x=BinarySearch(arr,6);
	printf("\n%d",x);
	
	x=RBS(arr,0,arr.length-1,6);
	printf("\n%d",x);
	
	return 0;
}
