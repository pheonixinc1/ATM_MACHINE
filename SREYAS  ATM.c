#include<stdio.h>
int main()
{
    //These is where the declaration is done//
    int balance=1500000,depositeamount,withdrawlamount,choice,num,i,key;
    int newpin;
    //thewe is new file
    int account=123456;
    int number;
    int pin=1234;
    int c=pin;
    FILE *fp;



    // Open the file to read-write mode
    fp = open("Password,txt","r+");


    //These is the first interface where you get welcome message
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t===================================================\n");
    printf("\t\t\t\t\tWelcome to SREYAS ATM banking Services \n");
    printf("\t\t\t\t===================================================\n\n\n");



    //These is the first interface where you give your account number to get services of bank
    printf("Enter your account number:\n");
    scanf("%d",&number);



    //These line is to check the value saved in the variable "number"
    //printf("The given value is: %d\n",number);
    // Check if the file exists and read the balance from it


    if(number==account)
    {
do
 {

 //The system CLS is used to clear the console and give new console
 system("CLS");
 //These is the main bar where we get the Service of the ATM
 printf("\n\n\t\t\t\t\t =====================================\n");
 printf("\t\t\t\t\t\t      ATM Services\n");
 printf("\t\t\t\t\t =====================================\n");
 printf("\n\n\n");
 printf("\t\t\t\t\t=======================================\n");
 printf("          \t\t\t\t Enter Your Choice\n");
 printf("          \t\t\t\t < 1 > Cash Deposite\n");
 printf("          \t\t\t\t < 2 > Cash Withdrawl\n");
 printf("          \t\t\t\t < 3 > Bank Balance\n");
 printf("          \t\t\t\t < 4 > Change Your Pin Number\n");
 printf("          \t\t\t\t < 5 > Exit\n");
 printf("\t\t\t\t\t=======================================\n\n\n\n");



 //These line is to talk the option from the user to get the ATM services
 printf("Your Selection:\t");
 scanf("\t\t\t\t\t%d",&choice);


 //These is the switch condition
 switch(choice)
    {

case 1 :system("CLS");
       printf("\n\n\n\n");
       printf("\t\t\t\t\t=======================================\n");
       printf("\t\t\t\t\t\tEnter Amount To Deposit\n");
       printf("\t\t\t\t\t=======================================\n");
	   scanf("\t\t\t\t%d",&depositeamount);
	   printf("\t\t\t\t\t=======================================\n");
	   printf("\t\t\t\t\t\tEnter Your Pin Number\n");
	   printf("\t\t\t\t\t=======================================\n");
	   scanf("\t\t\t\t%d",&pin);
	   if(pin==c)
	    {
	     balance=balance+depositeamount;
	     printf("your bank balance is:%d\n\n",balance);
	    }
	    else
	      {
	    printf("\t\t\t\t\tEntered Pin Number Is Wrong\n");
	      }
	   pin=c;
	   break;
    case 2:system("CLS");
       printf("\n\n\n\n");
       printf("\t\t\t\t\t=======================================\n");
       printf("\t\t\t\t\t\tEnter Amount To Withdraw\n");
       printf("\t\t\t\t\t=======================================\n");
	   scanf("%d",&withdrawlamount);
       printf("\t\t\t\t\t=======================================\n");
	   printf("\t\t\t\t\t\tEnter Your Pin Number\n");
       printf("\t\t\t\t\t=======================================\n");
	   scanf("%d",&pin);
	   if(pin==c)
	     {
	      balance=balance-withdrawlamount;
	      printf("your balance is:%d\n\n",balance);
          printf("\t\t\t\t--------------Take your receipt!!!------------------\n\n\n");
	      }
	   else
	      {
	      printf("Entered Pin Number Is Wrong\n");
	      }
	     pin=c;
	   break;
    case 3:system("CLS");
        printf("\n\n\n\n");
        printf("\t\t\t\t\t=======================================\n");
        printf("\t\t\t\t\t\tEnter Your Pin Number\n");
       printf("\t\t\t\t\t=======================================\n\n\n");
	    if(pin==c)
	    {
	     printf("Your Account Balance is:%d\n\n",balance);
	    }
	    else
	    {
	     printf("Entered Pin Number Is Wrong\n");
	    }
	    pin=c;
	    break;
    case 4:system("CLS");
        printf("\n\n\n\n");
        printf("\t\t\t\t\t===========================================\n");
        printf("\t\t\t\t\t\tEnter Your Previous Pin Number\n");
        printf("\t\t\t\t\t===========================================\n");
	   scanf("%d",&pin);
	  if(pin==c)
	  {
      printf("\t\t\t\t\t===========================================\n");
	  printf("\t\t\t\t\t\tEnter Your New Pin Number\n");
      printf("\t\t\t\t\t===========================================\n");
	  scanf("%d",&newpin);
	  printf("Your New Pin Is:%d\n\n",newpin);
	  pin=newpin;
	  c=pin;
	  }
	  else
	  {
	  printf("Entered Previous Pin Is Wrong\n");
	  }
	  break;
    case 5:system("CLS");
        printf("\n\n\n\t\t\t\t-----Thank you for using ATM Banking Machine!!!-----\n\n");
        exit(0);
	  break;
    }
 printf("Would you like to do another transaction:\n");
 printf("< 1 > Yes\n");
 printf("< 2 > No\n");
 scanf("%d",&num);
 if(num==2)
 {
     printf("\n\n\n\t\t\t\t-----Thank you for using ATM Banking Machine!!!-----\n\n");
 }
 }while(num==1);
    }
    else
    {
        printf("\t\t\t\t**********The Account number is invalid!!**********\n\n");
    }
    fclose(fp);
    getch();
    return 0;
}
