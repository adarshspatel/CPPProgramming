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

		for(j=1;j<=i*2;j++)
		{
			printf("%3c",'*');

			if(j==i && n-i!=0)
				printf("%*c",(n-i)*2*3,' ');

		}
		printf("\n");
	}

	getch();
}
