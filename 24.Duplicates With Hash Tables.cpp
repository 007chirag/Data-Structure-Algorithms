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
	
	for(i=0;i,n-1;i++)
	{
		count=1;
		if(arr.A[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr.A[i]==arr.A[j])
				{
					count++;
					arr.A[j]=-1;
				}
			}
		}
		if(count>1)
		printf("%d Appear %d Times",arr.A[i],count);
	}
	return 0;
}
