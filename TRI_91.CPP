//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,i,j,k,m=0;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1,k=0;i<=(n*2);i++)
	{
		if(i<n)
			m++;
		else
			m--;

		printf("%*c",1+((n-m)*4),' ');

		for(j=1,k=65;j<=m*2-1;j++)
		{
			printf("%4c",k);
			k=k+2;
		}
		printf("\n\n");
	}
	getch();
}
