//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
#include <string.h>

struct list
{
	int rollno;
	char name[20];
};

void main()
{
	struct list arr[30];	//structure delcare
	void struct_sort(struct list[],int);	//struct variable declare
	int i,n;
	clrscr();

	printf("How many students are : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		flushall();
		printf("Enter Roll No : ");
		scanf("%d",&arr[i].rollno);

		flushall();
		printf("\nEnter Name : ");
		gets(arr[i].name);

	}

	struct_sort(arr,n);

	for(i=0;i<n;i++)
	{
		printf("%6d %10s \n",arr[i].rollno,arr[i].name);
	}

	getch();

}

void struct_sort(struct list a[],int m)
{
	struct list temp;
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(strcmp(a[i].name,a[j].name)>0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}

	}

}

