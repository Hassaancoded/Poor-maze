#include<iostream>
#include<string>
using namespace std;

int main()
{
	double dollar;
	string currency;
	
	cout<<"CURRENCY CONVERTER\n";
	cout<<"Enter the American Dollars You Want to Convert: "<<endl;
	cin>>dollar;
	
	double pound = dollar*0.79;
	double euro = dollar*0.92;
	double rupee = dollar*277.70;
	
	cout<<"Enter PKR for converting USD to PKR, GBP , or EUR for USD to EUR: "<<endl;
	cin>>currency;
	
	if(currency == "PKR")

{
	
	cout<<dollar<<" Dollars In Rupees = "<<rupee;
	
}

else if(currency == "EUR")
{
	
	cout<<dollar<<" Dollars In Euro = "<<euro;
	
}

else if(currency == "GBP")
{
	
	cout<<dollar<<" Dollars In Pounds = "<<pound;
	
}

else
{
	
	cout<<"Invalid Input! Try Again."<<endl;
	
}

}