//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j;
	char chr=65;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{


		for(j=1;j<=i;j++)
		{
			chr=64+j;
			printf("%3c",chr);
		}

	       chr++;

		printf("\n");

	}

	getch();
}
