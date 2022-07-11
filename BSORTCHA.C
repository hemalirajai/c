#include<stdio.h>
#include<conio.h>

void main()
{
	char a[10]="deab",temp;
	int i,j,n;
	clrscr();
	printf("enter number of character:");
	scanf("%d",&n);
	n=n+1;
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nsorted data");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	getch();
}