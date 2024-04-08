#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int guess = rand()%100+1;

	int num = 0;
	int a = 1;
	int time =4;
	cout<<"Guess a Number between 1 and 100 "<<endl;
	do{
	cout<<"Turns remaining"<<time+1<<endl;
	cin>>num;
	if(num==guess)
	{
		cout<<"Congratulations"<<endl;
		a = 0;
		
	}
	else if(num<guess)
	{
		cout<<"Try a bigger Number"<<endl;
	}
	else if(num>guess)
	{
		cout<<"Try a smaller Number"<<endl;
	}

} while(a == 1 && time--);

	
}