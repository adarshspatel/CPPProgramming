//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,k=1,sum=0;


	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{

		for(j=i;j>=0;j--)
		{
			printf("%3d",k);
			sum=sum+k;
			k++;
		}
		printf("\n");
	}

		printf("Sum is : %d",sum);
	getch();
}
