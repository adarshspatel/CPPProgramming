//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,l,k=1;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		for(l=1,k=n;l<=i;l++)
			printf("%3d",i);

		printf("\n");
	}

	getch();
}
