#include<stdio.h>
#include<conio.h>
#define n 5

void main()
{
	char k[11],temp;
	int i,j;
	clrscr();
	printf("\nEnter %d Charecter to Sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&temp);
		j=i-1;
		while(temp<k[j]&&j>=0)
		{
			k[j+1]=k[j];
			j--;
		}
		jk[j+1]=temp;
	}
	printf("\nSorted list:");
	for(i=0;i<n;i++)
	{
		printf("\n%c",k[i]);
	}
	getch();
}