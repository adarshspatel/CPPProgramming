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
		printf("%*c",40-n/2,' ');
		for(l=1,k=n;l<=i;l++)
		{
			printf("%3d",k);
			k--;
		}

		printf("\n");
	}

	getch();
}
