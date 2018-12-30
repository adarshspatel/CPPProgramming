//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,k;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%*c",(n-i)*2+1,' ');

		for(j=1;j<=i;j++)
		{
			printf("%4c",64+j);
		}
		printf("\n");
	}

	getch();
}
