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

		printf("%*c",40+(n-i*3),' ');

		for(l=1,k=n;l<=i;l++)
		{
			printf("%3d",k);
			k--;
		}

		printf("\n");
	}

	getch();
}
