//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,k,sub=0;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n*2;i++)
	{
		if(i<n)
			sub++;
		else
			sub--;

		for(k=1;k<=n-sub;k++)
		printf(" ");

		for(j=1;j<=sub;j++)
		printf("* ");

		printf("\n");
	}

	getch();
}
