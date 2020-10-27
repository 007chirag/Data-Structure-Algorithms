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
	int n,i,j,k;
	int H[100]={0};
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
	
	printf("Enter a No 'K'\n");
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
		if(H[k-arr.A[i]]!=0)
		printf("%d + %d = %d \n",arr.A[i],k-arr.A[i],k);
		H[arr.A[i]]++;
	}
	return 0;
}

