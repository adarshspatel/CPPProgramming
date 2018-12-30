//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	clrscr();

	int n,i,j,k,sign,ch=0,l;


	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		for(j=1,k=ch;j<=i*2;j++)
		{
			printf("%3d",k);

			if(j==i)
				printf("%*c",1+((n-i)*3*2),' ');
			else if (j<i)
				k++;
			else
				k--;

		}
		printf("\n");
	}
	getch();
}
