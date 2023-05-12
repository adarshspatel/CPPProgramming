//Written by Adarsh Patel
//Web : http://adarsh-consultancy.hf4l.com

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	clrscr();
	void fn_dec_bin(long int no, int from, int to , int between);
	long int no=0;

	char *str,ch[2],c;

	printf("\n\t\tSee Number if Found Press 1 or 0");

	printf("\n 1 :between 32 to 63 : ");
	scanf("%d",&c);
	itoa(c, str+0, 10);

	printf("\n 2 :between (16-31) or (48-63) : ");
	scanf("%1d",&c);
	itoa(c, str+1, 10);

	printf("\n 3 :between (56-63)(40-47)(24-31)(8-15) : ");
	scanf("%d",&c);
	itoa(c, str+2, 10);

	printf("\n 4 :between (4-7,12-15,20-23,28-31,36-39,44-47,52-55,60-63) : ");
	scanf("%d",&c);
	itoa(c, str+3, 10);

	printf("\n 5 : 2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31,34,35,38,39,42,43,46,47,50,51,  54,55,58,59,62,63 : ");
	scanf("%d",&c);
	itoa(c, str+4, 10);

	printf("\n 6 : Any Odd number Like 1,3,5.... : ");
	scanf("%d",&c);
	itoa(c, str+5, 10);
	*(str+6) = NULL;

	no = atol(str+0);
	fn_dec_bin(no,2,10,0);
	getch();
}

void fn_dec_bin(long int no, int from, int to , int between)
{
	flushall();		//clean register
	between +=1;
	long int tem;
	int value, i=0;
	long int sum=0;

	tem = no;
	while(tem>0)
	{
		value=tem%to;
		sum=sum + (value * pow(from,float(i)));
		tem=tem/to;
		i=i+1;
	}
	printf("\nYour Number is......... : %d",sum);
}
