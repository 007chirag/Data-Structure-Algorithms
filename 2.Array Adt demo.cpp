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
	printf("Array Elements\n\n");
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.A[i]);
}

void append(struct array *arr,int x)
{
	if(arr->length<arr->size)
	arr->A[arr->length++]=x;
}

void insert(struct array *arr,int index,int x)
{
	int i;
	if(index>=0 && index<=arr->length)
	{
		for(i=arr->length;i>index;i--)
		arr->A[i]=arr->A[i-1];
		arr->A[index]=x;
		arr->length++;
	}
}

int Delete(struct array *arr,int index)
{
	int i,x=0;
	if(index>=0 && index<=arr->length)
	{
		x=arr->A[index];
		for(i=index;i<arr->length-1;i++)
		arr->A[i]=arr->A[i+1];
		arr->length--;
		return x;
	}
}


int linearsearch(struct array arr,int key)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(key==arr.A[i])
		return i;
	}
	return -1;
}


void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int mls(struct array *arr,int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i],&arr->A[0]);
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,i,x;
	struct array arr;
	printf("Enter size of array\n\n");
	scanf("%d",&arr.size);
	
	arr.A=(int *)malloc(sizeof(int)*arr.size);
	arr.length=0;
	
	printf("Enter No of Elements to be printed\n\n");
	scanf("%d",&n);
	arr.length=n;
	printf("Entering Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr.A[i]);
	
	display(arr);
	
	printf("\nAppending Element\n");
	append(&arr,9);
	display(arr);
	
	printf("\nInserting Elemnt\n");
	insert(&arr,0,0);
	display(arr);
	
	printf("\nDeleting Element\n %d",Delete(&arr,3));
	display(arr);
	
	printf("\nLinear Search.....\n");
	x=linearsearch(arr,5);
	if(x)
	printf("\nElement Found in Array\n");
	else
	printf("\nElement Not Found in Array\n");
	
	printf("\nModified Linear Search.....\n");
	x=mls(&arr,5);
	if(x)
	printf("\nElement Found in Array\n");
	else
	printf("\nElement Not Found in Array\n");
	display(arr);
	return 0;
}
