#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class Acc
{
    double accno;
    int pass;
    char name[15],bcode[10],conno[10];
    int amount;
    public:

    void IN()
    {
    double accno;
    char name[15],bcode[10],conno[10];
    int amount;
    int pass;

    cout<<"Enter name of account holder\n";
    gets(name);
    strcpy(this->name,name);
    cout<<"Enter contact number of the person\n";
    gets(conno);
    strcpy(this->conno,conno);
    cout<<"Please note account number & password\n";
    cout<<"Enter account number\n";
    cin>>accno;
    this->accno = accno;
    cout<<"Enter Branch code\n";
    gets(bcode);
    strcpy(this->bcode,bcode);
    cout<<"Enter amount you want to credit to your account\n";
    cin>>amount;
    this->amount=amount;
    cout<<"Enter passowrd for your account\n";
    cin>>pass;
    this->pass=pass;
    }

    void OUT()
    {

    cout<<"Account number\n";
    cout<<accno;
    cout<<"Branch code\n";
    puts(bcode);
    cout<<"Name of account holder\n";
    puts(name);
    cout<<"Contact number of the person\n";
    cout<<conno;
    cout<<"Amount in your account\n";
    cout<<amount;
    }

    void Password(double &k,int &j)
    {
      clrscr();
      int choi,pass,amount;
      if(this->accno==k&&this->pass==j)
      {
       cout<<"Entered password is right \n";
       cout<<"What you want to do with your account?\n";
       cout<<"1. Want to change password?\n";
       cout<<"2. Want to withdwran some money?\n";
       cout<<"3. Want to in more money in your account?\n";
       cout<<"4. Want to see all enteries?\n";
       cin>>choi;
       switch(choi)
       {
	 case 1: cout<<"Your current password is\n ";
		 cout<<this->pass<<endl;
		 cout<<"Enter new password\n";
		 cin>>pass;
		 this->pass=pass;
		 break;
	 case 2: cout<<"Your current balance is\n";
		 cout<<this->amount;
		 cout<<"How much money you want to withdraw \n";
		 cin>>amount;
		 if(amount<this->amount&&amount>0)
		 {
		  cout<<"\nTransfer complete\n";
		  cout<<"Remaining amount in your account is\n ";
		  choi=this->amount-amount;
		  cout<<choi;
		 }
		 else
		 {
		 cout<<"not possible";
		 getch();
		 exit(0);
		 }
		 break;
	 case 3: cout<<"Your current balance is\n";
		 cout<<this->amount;
		 cout<<"\nHow much money you want to put \n";
		 cin>>amount;
		 cout<<"tranfer complete\n";
		 cout<<"New balance is\n";
		 choi=this->amount+amount;
		 cout<<choi;
		 break;
	 case 4 :this ->OUT();
		  break;
	 default : cout<<"You entered wrong choice";
		   exit(0);
       }


      }
      else
      {
       exit (0);
      }
    }
};


void main()
 {
  clrscr();
  Acc s;
  int pass;
  double accn;
  cout<<"\nWelcome to bank \n";
  cout<<"To create new account enter following details\n";
  s.IN();
  clrscr();
  cout<<"To access account\n";
  cout<<"Enter account number\n";
  cin>>accn;
  cout<<"Enter password\n";
  cin>>pass;
  s.Password(accn,pass);
  getch();
 }
