#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

int main()
{
	struct array arr;
	int n,i,last_duplicate=0;
	printf("Enter Size of Array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(sizeof(int)*arr.size);
	arr.length=0;
	
	printf("Enter No of Elements You Want to Enter\n");
	scanf("%d",&n);
	arr.length=n;
	
	printf("Input Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr.A[i]);
	for(i=0;i<n;i++)
	{
		if(arr.A[i]==arr.A[i+1] && arr.A[i]!=last_duplicate)
		{
			printf("\nDuplicate : %d ",arr.A[i]);
			last_duplicate=arr.A[i];
		}
	}
	return 0;
}
