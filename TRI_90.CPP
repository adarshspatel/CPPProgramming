//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,i,j,k,m=0;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1,k=0;i<=(n*2);i++)
	{
		if(i<n)
		{
			k=65;
			m++;
		}
		else if(n<i)
		{
			k=90;
			m--;
		}

//		printf("%*c",1+((n-m)*3),' ');

		for(j=1;j<=m;j++)
		{
			printf("%3c",k);

			if(i<n)
				k++;
			else if(n<i)
				k--;
			else if(i==n)
				continue;

		}
		printf("\n");
	}
	getch();
}
