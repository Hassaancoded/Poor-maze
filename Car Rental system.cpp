#include<iostream>
using namespace std;
struct Car{
	string company, model;
	int year, regno, rent;
	bool rented;
};
displayCar(Car car)
{
	cout<<" company "<<car.company<<endl;
	cout<<" Model "<<car.model<<endl;
	cout<<" Year "<<car.year<<endl;
	cout<<" Registration Number : "<<car.regno<<endl;
	cout<<" Rent: Rs "<<car.rent<<"/day"<<endl;
}
int main()
{
	Car car123={"toyota","corolla",2022,123,5000,false};
	Car car345={"Honda","Civic",2023,345,7000,true};
	Car car567={"Suzuki","Mehran",2020,567,3000,false};
    cout<<"--Available Cars--"<<endl;
    displayCar(car123);
    displayCar(car345);
    displayCar(car567);
    while(true){
	cout<<"Enter 0 for exit or"<<endl;
    cout<<"Enter Registration Number"<<endl;
    int choice;
    cout<<"Enter: ";cin>>choice;
    switch(choice){
    	
    	case 123:{system("cls");
    		if(!car123.rented){
    			car123.rented=true;
    			cout<<"You Have Successfully Rented the following Car "<<endl;
    			displayCar(car123);
			}
    		else{
    			
    			cout<<"This Car is already rented"<<endl<<endl;      	}
    			break;
		}
		
		case 345:{system("cls");
			
			if(!car345.rented){
    			car345.rented=true;
    			cout<<"You Have Successfully Rented the following Car "<<endl;
    			displayCar(car345);
			}
    		else{
    			
    			cout<<"This Car is already rented"<<endl<<endl;      	}
			   break;
		}
		
		case 567:{system("cls");
			
			if(!car567.rented){
    			car567.rented=true;
    			cout<<"You Have Successfully Rented the following Car "<<endl;
    			displayCar(car567);
			}
    		else{
    			
    			cout<<"This Car is already rented"<<endl<<endl;      	}
			
			break;
		}
		case 0:{
			
			exit(0);
			break;
		}
		default:{
			cout<<"Invalid Input"<<endl<<endl;
			
			
			break;
		}
		
	}
	
}
	
	
	
	
	
}