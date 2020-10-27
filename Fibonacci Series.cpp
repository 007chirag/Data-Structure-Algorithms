#include<stdio.h>
#include<conio.h>

//Using Recursion
int fib(int n)
{
	if(n<=1)
	return n;
	else
	return fib(n-2)+fib(n-1);
}


//Using Iteration
int Fib(int n)
{
	int t=0,t1=1,s,i;
	if(n<=1)
	return n;
	for(i=2;i<=n;i++)
	{
		s=t+t1;
		t=t1;
		t1=s;
	}
	return s;
}

//Using Memoization
int F[10]={-1};
int Mfib(int n)
{
	if(n<=1)
	{
		F[n]=n;
		return n;
	}
	else
	{
		if(F[n-2]==-1)
		F[n-2]=Mfib(n-2);
		if(F[n-1]==-1)
		F[n-1]=Mfib(n-1);
		F[n]=F[n-2]+F[n-1];
		return F[n];
	}
}

int main()
{
	
	/*printf("Using Recursion Method\n");
	printf("%d\n",fib(0));
	printf("%d\n",fib(1));
	printf("%d\n",fib(2));
	printf("%d\n",fib(3));
	printf("%d\n",fib(4));
	*/
	printf("\nUsing Iteration Method\n");
	printf("%d\n",Fib(0));
	printf("%d\n",Fib(1));
	printf("%d\n",Fib(2));
	printf("%d\n",Fib(3));
	printf("%d\n",Fib(4));
	/*
	printf("\nUsing Memoization Method\n");
	printf("%d\n",Mfib(0));
	printf("%d\n",Mfib(1));
	printf("%d\n",Mfib(2));
	printf("%d\n",Mfib(3));
	printf("%d\n",Mfib(4));
	*/
	return 0;
}
