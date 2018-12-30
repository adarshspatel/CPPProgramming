//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,k;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		printf(" ");

		for(j=1;j<=i;j++)
		printf("* ");

		printf("\n");
	}

	getch();
}
