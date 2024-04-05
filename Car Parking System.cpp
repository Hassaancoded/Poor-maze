#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\tCar Parking"<<endl;
	while(true)
	{
		int enter;
		int car=0,bike=0,rickshaw=0;
		cout<<"Press 1 to enter car "<<endl;
			cout<<"Press 2 to enter bike "<<endl;
				cout<<"Press 3 to enter rickshaw "<<endl;
					cout<<"Press 4 to Show the record "<<endl;
						cout<<"Press 5 to delete the record "<<endl;
							cout<<"Press 6 to exit "<<endl;
							
		
		cin>>enter;
		if(enter==1)
		{
			car++;
			system("cls");
			cout<<"Car is added"<<endl;
		}
		else if(enter==2)
		{
			bike++;
			system("cls");
			cout<<"Bike is added"<<endl;
		}
		else if(enter==3)
		{
			rickshaw++;
			system("cls");
			cout<<"rickshaw is added"<<endl;
		}
		else if(enter==4)
		{
		
			cout<<"Car"<<endl;
			cout<<"Bike"<<endl;
			cout<<"Rickshaw"<<endl;
			
		}
		else if(enter==5)
		{
			car=0;
			bike=0;
			rickshaw=0;
			system("cls");
			cout<<"Record is deleted"<<endl;
		}
		else if(enter==6)
		{
			exit(0);
		}
		
		else{
			cout<<"You have exited the database"<<endl;
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}