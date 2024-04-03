#include<iostream>
using namespace std;

void showMenu()
{
	cout<<"*********MENU*********"<<"\n";
	cout<<"1. Check Balance"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw amount"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<" ------------------------"<<endl;
}
	
int main()
{
	int option;
	double balance = 500;
	
	do{
	showMenu();
	cout<<"Option: ";
	cin>>option;
	system("cls");
	
	switch (option)
	{
		case 1:cout<<"Total Balance is: "<<balance<<" RS "<<endl;break;
		case 2:cout<<"Deposit amount:";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:cout<<"Withdraw amount:";
			double withdrawAmount;
			cin>>withdrawAmount;
			if(withdrawAmount <= balance)
				balance -= withdrawAmount;
        else
        	cout<<" Not Enough Money"<<endl;
        	break;
        	
        }
	}	while(option!=4);
	
	system("pause>0");
	
	
	}	