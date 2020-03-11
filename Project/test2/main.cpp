#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>

using namespace std;
struct atm
{
 long int account_pin = 0;
    long int Account_number = 0;
 long double amount_bln = 0.0;

};
void money_trans(atm Atm[], int size = 2) {
 long int account_no = 0;
 long int pin = 0;
 long double amount = 0.0;
 long int account_no2 = 0;
 long double amount_trans = 0.0;
 char check = 'y';
 int fail = 0;
 while (check == 'y' || check == 'Y') {
  cout << "Enter Account Number :=" << endl;
  cin >> account_no;
  for (int i = 0; i < size; i++)
  {
   if (Atm[i].Account_number == account_no)
   {
    cout << "Enter Account pin :=" << endl;
    cin >> pin;
    if (Atm[i].account_pin == pin)
    {
     cout << "Enter Account Number in which you wish to transfer:=" << endl;
     cin >> account_no2;
     for (int j = 0; j < size; j++)
     {
      if (Atm[j].Account_number == account_no2)
      {
       cout << "Enter Amount to Transfer:=" << endl;
       cin >> amount_trans;
       if (amount_trans > Atm[i].amount_bln)
       {
        cout << "Can't transfer no sufficient balance:" << endl;
        Sleep(1000);

       }
       else
       {
        Atm[i].amount_bln -= amount_trans;
        Atm[j].amount_bln += amount_trans;
        cout << "transfer Amount  to Acount no:"<<endl;
        Sleep(1000);
        return;
       }
      }

     }

    }
    else
    {
     cout << "Incorrect Pin Code :" << endl;
     Sleep(1000);
     return;

    }


   }
   else
   {
    fail = 1;
   }
  }
  Sleep(1000);
  system("CLS");
  if (fail == 1)
  {
   cout << "no Account present:" << endl;
  }
  cout << "Wish to Try Again y & n :=" << endl;
  cin >> check;



 }

}
void money_withdraw(atm Atm[], int size = 2)
{
 long int account_no = 0;
 long int pin = 0;
 long double amount = 0.0;
 int fail = 0;
 char check = 'y';
 while (check == 'y' || check == 'Y')
 {
  cout << "Enter Account Number :=" << endl;
  cin >> account_no;
  for (int i = 0; i < size; i++)
  {
   if (Atm[i].Account_number == account_no)
   {
    cout << "Enter Account pin :=" << endl;
    cin >> pin;
    if (Atm[i].account_pin == pin)
    {
     cout << "Enter Amount for withdraw :=" << endl;
     cin >> amount;
     if (amount > Atm[i].amount_bln)
     {
      cout << "Can't transfer no sufficient balance:" << endl;
      Sleep(1000);
      return;
     }
     else
     {
      Atm[i].amount_bln -= amount;

      cout << "Amount withdrwa Remaining balance:'" << Atm[i].amount_bln << "':" << endl;
      Sleep(1000);
      return;
     }

    }
    else
    {
     cout << "Incorrect Pin Code :" << endl;
     Sleep(1000);
     return;

    }


   }

    else
    {
     fail = 1;

    }

  }
  Sleep(1000);
  system("CLS");
  if (fail == 1)
  {
   cout << "No Acount Present:" << endl;
  }
  cout << "Wish to Try Again y & n :=" << endl;
  cin >> check;



 }

}


void money_check(atm Atm[], int size = 2) {

 long int account_no = 0;
 long int pin = 0;
 int fail = 0;

 char check = 'y';
 while (check == 'y' || check == 'Y')
 {
  cout << "Enter Account Number :=" << endl;
  cin >> account_no;
  for (int i = 0; i < size; i++)
  {
   if (Atm[i].Account_number == account_no)
   {
    cout << "Enter Account pin :=" << endl;
    cin >> pin;
    if (Atm[i].account_pin == pin)
    {
     cout << "Account Balance of Entered Account is:='" << Atm[i].amount_bln << "'" << endl;

     Sleep(1000);
     return;
    }
    else
    {
     cout << "Incorrect Pin Code :" << endl;
     Sleep(1000);
     return;
    }


   }
   else
   {
     fail = 1;

   }

  }
  Sleep(1000);
  system("CLS");
  if (fail == 1)
  {
   cout << "No Account Present:" << endl;

  }
  cout << "Wish to Try Again y & n :=" << endl;
  cin >> check;



 }

}
//------------------------Hardcoded Accounts Details As Programe Statments Says We take 2 Accounts -------------------------------------------
void hardcoded(atm Atm[],int size=2)
{
 Atm[0].Account_number = 123456;
 Atm[0].account_pin = 1122;
 Atm[0].amount_bln = 20000;
//---------------------------------------Account no 2--------------------------------------
 Atm[1].Account_number = 1234567;
 Atm[1].account_pin = 1218;
 Atm[1].amount_bln = 20000;
 return;
}
void disp(atm Atm[],int size=2)
{

for (int i = 0; i < size; i++)
 {
 cout << Atm[i].Account_number << endl;


 }

}
void menu()
{
 system("color 7");
 cout << "******Loding System***";
 Sleep(500);
 cout << "*******";
 Sleep(500);
 cout << "***********";
 cout << "**************";
 Sleep(1000);
 cout << "***************";
 system("CLS");

 cout << endl
  << " Press 1 - Money tansfer.\n"
  << " Press 2 - Check Balance.\n"
  << " Press 3 - Withdraw Balance.\n"
  << " Press 4 - Exit .\n"

  << " Enter your choice : ";

}
//-------------------------------------Main----------------------------------------------------------------------------------------------------------------------------
int main()
{

 atm Atm[2];

 hardcoded(Atm);

 char choice = 'y';
 int i = 0, number = 0;
 system("color 7");
 menu();

 while (choice == 'y' || choice == 'Y')
 {

  cin >> number;
  switch (number)
  {
  case 1:
   money_trans(Atm);
   break;
  case 2:
   money_check(Atm);
   break;
  case 3:
   money_withdraw(Atm);
   break;

  case 4:
   cout << "Programe Ends Here !!!!" << endl;
   Sleep(1000);
   system("CLS");
   break;
  default:
   system("color 4");
   cout << "Enter invalid entry make sure you have enter it correctly :";
   break;
  }
  system("color 7");
  cout << endl;
  cout << "Wish To Perform More Operations  y or n:" << endl;
  cin >> choice;
  if (choice == 'y' || choice == 'Y')
  {
   system("CLS");
   menu();
  }


 }

 system("pause");
 return 0;
}
