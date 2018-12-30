//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,i,j,k;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1,k=65;i<=n;i++)
	{
		printf("%*c",2+((n-i)*2),' ');
		for(j=1;j<=i;j++)
		{
			printf("%4c",k);
			k++;
		}
		printf("\n");
	}
	getch();
}
