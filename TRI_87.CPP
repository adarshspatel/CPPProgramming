//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,i,j,k,m;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1,m=0,k=65;i<=(n*2)-1;i++)
	{
		if(i<n)
			m++;
		else
			m--;

		for(j=1,k=90;j<=m;j++)
		{
			printf("%3c",k);
			k--;
		}
		printf("\n");
	}
	getch();
}
