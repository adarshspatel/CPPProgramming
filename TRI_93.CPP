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
		if(i%2==0)
			printf("%*c",1+(n-1)*3,' ');
		else
			printf("%*c",1+(n-i)*3,' ');

		for(j=1,k=i;j<=i;j++)
		{
				printf("%3d",k);
				k++;
		}
		printf("\n\n");
	}
	getch();
}
