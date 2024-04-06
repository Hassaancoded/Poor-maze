#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int user=0;
	int cpu=0;
	cout<<"ROCK PAPER SCISSORS SHOOT !"<<endl;
	cout<<"1) Rock"<<endl;
	cout<<"2) paper"<<endl;
	cout<<"3) Scissors"<<endl;
	cin>>user;
	if(user==1)
	{
		cout<<"you choose rock"<<endl;
	}
	else if(user==2)
	{
		cout<<"you choose Paper"<<endl;
	}
	else if(user==3)
	{
		cout<<"you choose Scissors"<<endl;
	}
	
	cpu = rand()%3+1;
	if(cpu==1)
	{
		cout<<"computer choose rock"<<endl;
	}
	else if(cpu==2)
	{
		cout<<"computer choose Paper"<<endl;
	}
	else
	{
		cout<<"computer choose Scissors"<<endl;
	}
	
 if(user==1)
	{
		if(cpu==2)
		{
			cout<<"Ohh! You Lost"<<endl;
		}
			if(cpu==3)
		{
			cout<<"Congratulations! You Won"<<endl;
		}
	}
	else if(user==2)
	{
		if(cpu==1)
		{
			cout<<"Ohh! You Lost"<<endl;
		}
			if(cpu==3)
		{
			cout<<"Congratulations! You Won"<<endl;
		}
	}
		else if(user==3)
	{
		if(cpu==1)
		{
			cout<<"Ohh! You Lost"<<endl;
		}
			if(cpu==2)
		{
			cout<<"Congratulations! You Won"<<endl;
		}
	}
	return 0;

}