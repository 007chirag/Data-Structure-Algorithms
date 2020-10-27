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
	i=0;
	j=arr.length-1;
	while(i<j)
	{
		if(arr.A[i]+arr.A[j]==k)
		{
			printf("%d + %d = %d \n",arr.A[i],arr.A[j],k);
			i++;
			j--;
		}
		else if(arr.A[i]+arr.A[j]<k)
		i++;
		else
		j--;
	}
	return 0;
}

