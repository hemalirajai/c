#include<stdio.h>
#include<conio.h>
int partition(int array[],int low,int high)
{
	int pivot=array[high];
	int i=(low-1);
	int j,t;

	for(j=low;j<high;j++)
	{
		if(array[j]<=pivot)
		{
			i++;
			t=array[i];
			array[i]=array[j];
			array[j]=t;
		}
	}
	t=array[i+1];
	array[i+1]=array[high];
	array[high]=t;
	return(i+1);
}

void quicksort(int array[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(array,low,high);
		quicksort(array,low,pi-1);
		quicksort(array,pi+1,high);
	}
}

void printArray(int array[],int size)
{
	int i;
	for(i=0;i<size;++i)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}

void main()
{
	int data[]={9,3,8,1,0,6};
	int n=sizeof(data)/sizeof(data[0]);
	clrscr();

	printf("unsorted data\n");
	printArray(data,n);
	quicksort(data,0,n-1);
	printf("sorted data:\n");
	printArray(data,n);
	getch();
}