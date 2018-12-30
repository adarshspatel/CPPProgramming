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
		for(l=1;l<=n-i;l++)
			printf(" ");

		for(j=1,k=i;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}

	getch();
}
