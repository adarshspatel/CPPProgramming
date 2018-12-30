//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,l,k=1;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(l=1;l<=n-i+1;l++)
			printf("%3d",i);

		printf("\n");
	}

	getch();
}
