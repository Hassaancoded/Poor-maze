#include<iostream>
using namespace std;

int main()
{
	double var1, var2;
	beginning:
	system("cls");
	cout<<"Enter First Number: "<<endl;
	cin>>var1;
	cout<<"Enter Second Number: "<<endl;
	cin>>var2;
	cout<<"What do you want to do with that number? "<<endl;
	cout<<"+  add"<<endl;
	cout<<"-  substract"<<endl;
	cout<<"+  multiply"<<endl;
	cout<<"/  divide"<<endl;
	
	char(decision);
	
	cin>>decision;
	system("cls");
	switch(decision)
	{
		
		case '+':
			cout<< var1 << "+"<<var2<< "="<< (var1 + var2)<<endl;
			break;
		case '=':
			cout<< var1 << "-"<<var2<< "="<< (var1 - var2)<<endl;
			break;
		case '*':
			cout<< var1 << "*"<<var2<< "="<< (var1 * var2)<<endl;
			break;
		case '/':
			if (var2)
			cout<< var1 << "/"<<var2<< "="<< (var1 / var2)<<endl;
		
			else
			
			cout<<"you cant divide by 0"<<endl;
			break ;
	
		default:
			cout<<"You typed wrong character";
			
	}
		char decision2;
		
		cout<< " ! Do you want to continue ? "<<endl;
		cin>> decision2;
		
		if (decision2 == 'y' || decision2 =='Y')
		goto beginning;
		

}
