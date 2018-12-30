//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>
# include <string.h>
# include <ctype.h>

void main()
{
	clrscr();
	int a[50],i,no;
	char ans= ' ';

	printf("How Many Elemnts are There : ");
	scanf("%d",&no);

	for(i=0;i<no;i++)
	{
		printf("Enter A[%d] :",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<no-1;i++)
	{
		if(a[i]==a[i+1])
			continue;
		else if((a[i]-a[i+1])>0 && ans!='A')
			ans='D';
		else if(a[i]-a[i+1]<=0 && ans!='D')
			ans='A';
		else
		{
			ans='N';
			break;
		}
	}

		if(ans=='A')
			printf("Array Sorted in Ascending Order");
		else if(ans=='D')
			printf("Array Sorted in Desending Order");
		else if(ans=='N')
			printf("Array are Not in Order");
		else
			printf("All Element are equal");



	getch();
}
