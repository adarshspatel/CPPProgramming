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

		printf("%*c",10+(n-i)*3,' ');
		for(j=i;j>=1;j--)
		{
			printf("%3d",j%2);
		}
		printf("\n");
	}
	getch();
}
