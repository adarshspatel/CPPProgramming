//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,i,j,k,m;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1,m=0;i<=n*2-1;i++)
	{
		if(i<=n)
			m++;
		else
			m--;
		printf("%*c",1+(n-m)*3,' ');

		for(j=1,k=n;j<=m*2-1;j++)
		{
				printf("%3d",k);

				if(j<m)
					k--;
				else
					k++;
		}
		printf("\n\n");
	}
	getch();
}
