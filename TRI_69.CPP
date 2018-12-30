//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j;


	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%*c",10+(((n-i)*4)/2),' ');

		for(j=1;j<=i;j++)
		{
			printf("%4d",j%2);

		}
		printf("\n");
	}


	getch();
}
