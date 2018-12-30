//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,i,j,k,m=0;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		for(j=1,k=1;j<=i;j++)
		{
				printf("%3d",k);
				k++;
		}
		printf("\n\n");
	}
	getch();
}
