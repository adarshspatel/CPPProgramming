//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	clrscr();

	int n,i,j,k,sign;
	char ch;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%*c",(n-i)*4+1,' ');

		for(j=1,k=-(i-1);j<=i*2-1;j++)
		{
			printf("%4d",k);
			k++;
		}
		printf("\n");
	}
	getch();
}
