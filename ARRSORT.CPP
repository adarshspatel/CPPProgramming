//Written by Adarsh Patel
//take value of number of array
//enter value and see in ascending order

#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int arr[70],i,n,j,temp;

	printf("Enter the number of elements :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Element arr[%d] =",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j]) 	//change < sign to descinding
			{
			 //	temp=arr[i];
				arr[i]=arr[i]+arr[j];
			  //	arr[i]=arr[j];
				arr[j]=arr[i]-arr[j];
			  //	arr[j]=temp;
				arr[i]=arr[i]-arr[j];

			}

		}
	}

		for(i=0;i<n;i++)
			printf("%3d\n",arr[i]);

	getch();
}
