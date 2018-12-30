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
		for(j=1,k=i;j<=n-i+1;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}

	getch();
}
