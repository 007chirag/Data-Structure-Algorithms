#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int *p,*q,i;
	p=(int *)malloc(sizeof(int)*5);
	q=(int *)malloc(sizeof(int)*8);
	for(i=0;i<5;i++)
	scanf("%d\n",&p[i]);
	
	for(i=0;i<5;i++)
	q[i]=p[i];
	
	for(i=5;i<8;i++)
	scanf("%d\n",&q[i]);
	
	p=q;
	q=NULL;
	
	for(i=0;i<8;i++)
	printf("%d\n",p[i]);
	
	return 0;
}
