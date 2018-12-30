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

		printf("%*c",40+(n-i*3),' ');

		for(j=1,k=1;j<=i*n-1;j++)
		{
			if(j<i)
			{
			printf("%3d",k);
			k++;
			}
			else if(i<j && k!=0)
			{
			printf("%3d",abs(k));
			k--;
			}

		}


		printf("\n");

	}

	getch();
}
