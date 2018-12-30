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
		printf("%*c",3*i-1,' ');

		for(l=1,k=i;l<=n-i+1;l++)
		{

			printf("%3d",k);
			k++;
		}
		printf("\n");
	}

	getch();
}
