//No of Matching Pair Socks Problem in C by Chirag Sharma

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int length;
};

int main()
{
	struct array arr;
	int H[41]={0};
	int i,result=0;
	printf("Enter Total No of Socks\n");
	scanf("%d",&arr.length);
	arr.A=(int *)malloc(sizeof(int)*arr.length);
	
	printf("\nEnter Different No of Color Socks\n");
	for(i=0;i<arr.length;i++)
	scanf("%d",&arr.A[i]);
	
	printf("\n\nEntered Colors of socks in The Pile\n\n");
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.A[i]);
	
	for(i=0;i<arr.length;i++)
	H[arr.A[i]]++;
	
	/*printf("\n\n");
	for(i=0;i<41;i++)
	printf("%d ",H[i]);
	*/
	
	//for(i=0;i<=40;i++)
	//{
		//if(H[i]>1)
		//printf("%d Repeats %d Times",i,H[i]);
	//}
	
	for(i=0;i<41;i++)
	result=result+H[i]/2;
	printf("\n\nNo of Matching Pairs...\n %d\n",result);
	
	return 0;
}
