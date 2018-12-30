//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,k;


	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{

		for(j=i;j>=0;j--)
		{
			printf("%3d",j%2);
		}
		printf("\n");
	}
	getch();
}
