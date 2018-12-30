//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();

	int n,i,j,k=1,l;
	char ch=65;


	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(l=1;l<=n-i;l++)
			printf("%3c",'*');

		for(j=1;j<=i;j++)
		{
			printf("%3d",k);

			k++;
		}

		printf("\n");

	}
	getch();
}
