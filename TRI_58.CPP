//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();

	int n,i,j,k;


	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%*c",10,' ');

		for(j=1,k=1;j<=i*2-1;j++)
		{
			printf("%3d",k);

			if(j>=i)
			k--;
			else
			k++;
		}

		printf("\n");
	}
	getch();
}
