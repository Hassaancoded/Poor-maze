#include<iostream>
using namespace std;

int main()
{
	int sal;
	while(true){
	cout<<"--PAYROLL SYSTEM--"<<endl;
	cout<<"Enter 0 for exit or "<<endl;
	cout<<"Enter Salary: ";
	cin>>sal;
	//system("cls");
	if (sal<=1000)
	{
		int medical, hRent, tax, total;
		medical= sal*7/100;
		hRent=sal*10/100;
		tax=sal*5/100;
		total=sal+medical+hRent-tax;
		cout<<"Medical Allowance: "<<medical<<endl;
		cout<<"House Rent Allowance: "<<hRent<<endl;
		cout<<"Tax on Salary: "<<tax<<endl;
		cout<<"Your total Salary: "<<total<<endl<<endl;
		
	}
	else if(sal>10000 && sal<=20000)
	{
		int medical, hRent, tax, total;
		medical= sal*10/100;
		hRent=sal*15/100;
		tax=sal*8/100;
		total=sal+medical+hRent-tax;
		cout<<"Medical Allowance: "<<medical<<endl;
		cout<<"House Rent Allowance: "<<hRent<<endl;
		cout<<"Tax on Salary: "<<tax<<endl;
		cout<<"Your total Salary: "<<total<<endl<<endl;	
	}
	else if(sal==0)
	{	
		exit(0);
	}
	else
	{
		int medical, hRent, tax, total;
		medical= sal*15/100;
		hRent=sal*20/100;
		tax=sal*12/100;
		total=sal+medical+hRent-tax;
		cout<<"Medical Allowance: "<<medical<<endl;
		cout<<"House Rent Allowance: "<<hRent<<endl;
		cout<<"Tax on Salary: "<<tax<<endl;
		cout<<"Your total Salary: "<<total<<endl<<endl;	

	}

}

}