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
		for(j=1;j<=i;j++)
		printf("* ");

		printf("\n");
	}

	getch();
}
