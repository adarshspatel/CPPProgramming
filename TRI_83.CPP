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
//		printf("%*c",(n-i)*4+1,' ');

		for(j=1;j<=n;j++)
		{
			if(j==1 || j==n || i==1 || i==n)
				printf("%4c",'*');
			else
				printf("%4c",' ');

		}
		printf("\n");
	}
	getch();
}
