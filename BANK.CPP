#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#define DRAW_LINE printf("\n===============================================================================\n")
#define PRESS_ANY_KEY printf("Press Any Key To Continue....");
struct date dd;
struct tra
{
	int acc_no;
	float c,d;
};
struct add_cus
{
	int acc_no;
	long int phone;
	char name[25],add[40],city[30];
};
struct master
{
	int acno;
	float bala;
};
struct master m;
struct add_cus add_customer;
struct tra transaction;
struct tra t1;
FILE *fp;
void displayallacc(int);			//Display all account summary
int check_for_account(int);		//Checking account exist or not
void main()
{
	void credit();
	getdate(&dd);
	int n,i;
	char ch[3];
	clrscr();
	void addcustomer(add_cus);
	void viecustomer(add_cus);
	void addtransaction(tra);
	void dispacc(tra);


	do
	{
		fflush(stdin);
		//Jump to function according to choice
		if(ch[0]=='1')
		{
			addcustomer(add_customer);
			flushall();
		}
		if(ch[0]=='2')
		{
			viecustomer(add_customer);
			flushall();
		}
		if(ch[0]=='3')
		{
			addtransaction(transaction);
			flushall();
		}

		if(ch[0]=='4')
		{
			dispacc(transaction);
			flushall();
		}
		if(ch[0]=='5')
		{
			displayallacc(1);
			flushall();
		}

		if(ch[0]=='9')
			printf("\n 9 Selected ");
		ch[0]=NULL;
		textcolor(WHITE);
		textbackground(BLUE);
		clrscr();

		//Just for Headign
		DRAW_LINE;
		printf("\t\t\t");
		textcolor(12);
		cprintf("::   BANK MANAGEMENT SOFTWARE   ::");
		printf("\n\t\t\t");
		cprintf("----------------------------------");
		printf("\n\t\t\t");
		textcolor(141);
		cprintf(" Design & Develop by Adarsh Patel");
		DRAW_LINE;
		printf("\t\t\t\t(%02d-%02d-%4d)",dd.da_day,dd.da_mon,dd.da_year);

		//Display Choice
		printf("\n1 : New Customer Entry ");
		printf("\n2 : View Customer Detail");
		printf("\n3 : Add Transaction ");
		printf("\n4 : Display Account ");
		printf("\n5 : Display All Account Summary");
		printf("\n9 : Exit ");
		printf("\n\nEnter Your Choice : ");
		flushall();
		fscanf(stdin,"%c",&ch);
		flushall();
		ch[1]=NULL;
	}while( ch[0]!='9' );
	credit();
//	getch();
	textcolor(WHITE);
	textbackground(BLACK);
	clrscr();
}

void addcustomer(struct add_cus a)
{
	int flag=0;
//	long unsigned int ph;
	char *n;
	textcolor(WHITE);
	clrscr();
	DRAW_LINE;
	printf("\t\tEnter New Customer Entry : ");
	printf("\n\n1 : Customer Acc No : ");
	scanf("%d",&a.acc_no);
	flushall();


	flag = check_for_account(a.acc_no); //Varifing Account Number
	//If Number Exist
	if(flag==1)
	{
		fprintf(stdout,"\nSorry Account Number Already Exist....\n");
		fprintf(stdout,"Try Again.....\n\n");
		DRAW_LINE;
		PRESS_ANY_KEY;
		getch();
		return;
	}

	//If number are not exist then enter New Entry
	if(flag==0)
	{
		printf("\n2 : Customer Name : ");
		gets(n);
		strcpy(a.name,n);

		printf("\n3 : Address       : ");
		gets(n);
		strcpy(a.add,n);

		printf("\n4 : City          : ");
		gets(n);
		strcpy(a.city,n);

		printf("\n5 : Phone No      : ");
//		scanf("%lu",&ph);
		scanf("%ld",&a.phone);

		fp = fopen("name.bnk","ab");
		fwrite(&a,sizeof(a),1,fp);	//Store whole data to file
		fclose(fp);
		fprintf(stdout,"\nCustomer Successfully Added...\n\n");
	}
	DRAW_LINE;
	PRESS_ANY_KEY;
	getch();
	return;
}

//View all customer list(A/c Number, Name, Phone, City)
void viecustomer(struct add_cus v)
{
	textcolor(WHITE);
	clrscr();
	fp = fopen("name.bnk","rb");
	DRAW_LINE;
	printf("\t\t\t\t");
	textcolor(14);
	cprintf("CUSTOMER LIST ");
	textcolor(WHITE);
	DRAW_LINE;
	textcolor(13);
	cprintf("Account No.   Name                  City                    Phone    ");
	textcolor(WHITE);
	DRAW_LINE;
	rewind(fp);

	do
	{
		int n = fread(&v,sizeof(v),1,fp);
		if(n<1)
			break;
		fprintf(stdout,"%-13d %-21s %-20s %10ld\n",v.acc_no,&v.name,&v.city,v.phone);

	}while(!feof(fp));
	fclose(fp);
	DRAW_LINE;
	PRESS_ANY_KEY;
	getch();
	return;
}
//Add transaction
void	addtransaction(struct tra add_tra)
{
	char cus_name[25],*str;
	int flag=0,tflag=0;
	float cur_bal=0;
	FILE *fp1,*bal;

	fp = fopen("tra.bnk","ab");
	textcolor(WHITE);
	clrscr();
	DRAW_LINE;
	printf("\t\t\t\tENTER TRANSACTION");
	DRAW_LINE;
	printf("\n\n1 : Enter Acc. Number  : ");
	scanf("%10d",&add_tra.acc_no);
	flushall();

	flag = check_for_account(add_tra.acc_no);
	if(flag==0)
	{
		printf("\nSorry Account Number Not Found...");
		printf("\nTry Again....\n\n");
		DRAW_LINE;
		PRESS_ANY_KEY;
		getch();
		return;
	}
	//store name from global structure for displaying
	strcpy(cus_name,add_customer.name);
	displayallacc(0);	//Updating All Balance

	bal = fopen("summary.bnk","rb");
	rewind(bal);

	do
	{
		int p = fread(&m,sizeof(m),1,bal);

		if(p<1)
			break;
		if(m.acno==add_tra.acc_no)
		{
			cur_bal = m.bala;
			break;
		}
	}while(!feof(bal));

	printf("\t\t\t\t\t Account Name    : %-20s",cus_name);
	printf("\t\t\t\t\t\t Current Balance : %12.2f",cur_bal);
	printf("\nWish to Enter Credit or Debit (C/D) : ");
	scanf("%s",str);
	flushall();

	if(str[0]=='C' || str[0]=='c')
	{
		printf("\nEnter Credit Amount : ");
		scanf("%f",&add_tra.c);
		add_tra.d = 0.0;
		tflag=1;
	}
	else if(str[0]=='D' || str[0]=='d')
	{
		printf("\nEnter Debit Amount : ");
		scanf("%f",&add_tra.d);
		add_tra.c = 0;
		tflag = 1;
	}
	if(add_tra.d>cur_bal)
	{
		printf("\nSorry Not Enough Fund available in the Account....");
		printf("\nTry Again....");
	}
	else if(tflag==1)
	{
		fwrite(&add_tra,sizeof(add_tra),1,fp);
		fprintf(stdout,"\nTransaction Successfully Added...\n");
	}
	else if(tflag==0)
		fprintf(stdout,"\nTransaction Not Added......\nTry Again....");
	fclose(fp);
	DRAW_LINE;
	PRESS_ANY_KEY;
	getch();
	return;
}

//Dispaly one account detail
void dispacc(struct tra disp_tra_detail)
{
	int accno,tacc,flag=0;
	float c,d;
	char *tname;
	FILE *fp1;
	textcolor(WHITE);
	clrscr();
	DRAW_LINE;
	printf("\t\t\tDISPLAY ACCOUNT TRANSACTION");
	DRAW_LINE;
	printf("\nEnter Account Number : ");
	scanf("%d",&tacc);
	accno = tacc;

	flag = check_for_account(tacc);
	//it will also store name in global structure so we can access
	//name in this function without passing
	//If a/c number not found then print message and return
	if(flag==0)
	{
		printf("\nSorry Account Number Not Found...\n");
		printf("\nTry Again....\n\n");
		DRAW_LINE;
		PRESS_ANY_KEY;
		getch();
		return;
	}

	fp = fopen("tra.bnk","rb");
	rewind(fp);
	clrscr();
	DRAW_LINE;
	textcolor(12);
	printf("\t\t");
	cprintf("ACCOUNT INFORMATION OF : %s ",add_customer.name);
	printf("\n\t\t\t");
	cprintf("ACCOUNT NUMBER : %d",tacc);
	DRAW_LINE;
	textcolor(14);
	cprintf("   Credit         Debit         ");
	textcolor(WHITE);
	printf("\n--------------------------------\n");

	long float sum=0.0;
	do
	{
		int n = fread(&disp_tra_detail,sizeof(disp_tra_detail),1,fp);
		if(n<1)
			break;


		if(disp_tra_detail.acc_no==accno && (disp_tra_detail.c!=0.0 || disp_tra_detail.d!=0.0))
		{
			fprintf(stdout,"%10.2f %10.2f\n",disp_tra_detail.c,disp_tra_detail.d);
			sum = sum + disp_tra_detail.c - disp_tra_detail.d;
		}
	}while(!feof(fp));
	fclose(fp);
	//if balance is less than 500 then change color

	if(sum<500)
		textcolor(45);

	cprintf("\n\nCurrent Balance is : %10.2lf",sum);
	textcolor(WHITE);

	DRAW_LINE;
	PRESS_ANY_KEY;
	getch();

	return;
}
//All account Summary
void displayallacc(int flag)
{
	FILE *fp,*fp1,*fp2;

	fp = fopen("summary.bnk","wb+");
	fp1 = fopen("name.bnk","rb");
	fp2 = fopen("tra.bnk","rb");

	float sum=0.0;

	//For reading customer name and number
	do
	{
		int n = fread(&add_customer,sizeof(add_customer),1,fp1);

		if(n<1)
			break;
		rewind(fp2);
		sum = 0.0;

		//Search for All entry and Find Current Balance store to summary.bnk
		do
		{
			int j = fread(&t1,sizeof(t1),1,fp2);
			if(j<1)
				break;

			if(add_customer.acc_no==t1.acc_no)	//if a/c number match then
				sum = sum + t1.c - t1.d;      //add credit and less debit

		}while(!feof(fp2));

		m.acno = add_customer.acc_no;
		m.bala = sum;
		fwrite(&m,sizeof(m),1,fp);	//store balance and number to file
	}while(!feof(fp1));
	rewind(fp);	//Summary file rewind for displaying
	fclose(fp1);   //Customer Name file close
	fclose(fp2);	//Transaction file Close

	if(flag==0)	//If calling from transaction execute this and return
	{			//back without displaying
		fclose(fp);
		textcolor(WHITE);
		return;
	}

	textcolor(WHITE);
	clrscr();
	//Display if call from display all accounts menu item
	DRAW_LINE;
	printf("\t\t\t\tALL ACCOUNTS SUMMARY");
	DRAW_LINE;
	printf("\nAccount Number       Balance ");
	printf("\n-------------------------------------------------------------------------------");

	do
	{
		int k = fread(&m,sizeof(m),1,fp);
		if(k<1)
			break;

		printf("\n%-15d %12.2f",m.acno,m.bala);

	}while(!feof(fp));
	fclose(fp);	//close summary file
	DRAW_LINE;
	PRESS_ANY_KEY;
	getch();
	return;
}
int check_for_account(int temp_acc_no)
{
	FILE *fp1;
	fp1 = fopen("name.bnk","rb");
	int flag=0;
	//checking for a/c no if found flag=1, else flag=0
	do
	{
		int n = fread(&add_customer,sizeof(add_customer),1,fp1);
		if(n<1)
			break;

		if(temp_acc_no==add_customer.acc_no)
		{
			flag=1;
			fclose(fp1);
			break;
		}
	}while(!feof(fp1));
	fclose(fp1);

	return(flag);
}
void credit()
{
   clrscr();
   char str1[]={"::----------:    CREDIT    :-----------::"};
   char str2[]={"::----------: Developed by :-----------::"};
   char str3[]={"             Mr.Adarsh Patel             "};
   char str4[]={"::----------:    Guide     :-----------::"};
   char str5[]={"             Dr. P. M. Dolia             "};

   textcolor(14);
   textbackground(13);
   clrscr();
   for(int i=25;i>-10;i = i - 1)
   {
	   if(i==0)
		strcpy(str1,NULL);
	   if(i==-2)
		strcpy(str2,NULL);
	   if(i==-3)
		strcpy(str3,NULL);
	   if(i==-7)
		strcpy(str4,NULL);
	   if(i==-8)
		strcpy(str5,NULL);

	   if(i>0)
	   {
		   gotoxy(40-(strlen(str1)/2), i);
		   cprintf("%s",str1);
	   }

	   if(i<21)
	   {
		   gotoxy(40-(strlen(str2)/2),i+3);
		   cprintf("%s",str2);
	   }

	   if(i<19)
	   {
		   gotoxy(40-(strlen(str3)/2),i+4);
		   cprintf("%s",str3);
	   }

	   if(i<16)
	   {
		   gotoxy(40-(strlen(str4)/2),i+7);
		   cprintf("%s",str4);
	   }

	   if(i<14)
	   {
		   gotoxy(40-(strlen(str5)/2),i+8);
		   cprintf("%s",str5);
	   }
	   delay(500);
	   clrscr();
	}
}
