#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,t,a[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter elements:");
		scanf("%d",&t);
		j=i-1;

		while(t<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}