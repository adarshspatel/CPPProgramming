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

	for(i=1;i<=n;i++)
	{
		chr=64+n-i+1;

		for(j=1;j<=i;j++)
		{
			printf("%3c",chr);
		}



		printf("\n");

	}

	getch();
}
