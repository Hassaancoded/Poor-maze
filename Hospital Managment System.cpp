#include<iostream>
#include<vector>
using namespace std;
struct hospital
{
	string name, address, bloodG;
	int age, contact;
	
};  hospital hsptl;
vector<hospital> vh;
int main()
{
	int value;
	while(true)
	{
		cout<<"1. To admit Patients: "<<endl;
		cout<<"2. To Show All Patients: "<<endl;
		cout<<"3. To Discharge Patients: "<<endl;
		cout<<"4. To Exit: "<<endl;
		cin>>value;
		switch(value)
		{
			case 1:{
				int choice;
				do{
					cout<<"Name: ";cin>>hsptl.name;
					cout<<"Age: ";cin>>hsptl.age;
			  		cout<<"Contact: ";cin>>hsptl.contact;
					cout<<"Blood Group: ";cin>>hsptl.bloodG;
					cout<<"Address: ";cin>>hsptl.address;
					vh.push_back(hsptl);
					for(int i=0; i<vh.size(); i++)	
					{
						system("cls");
						cout<<i+1<<"Patient Admitted ";
					}	
					cout<<" 1 for continue or 0 for exit: "; cin>>choice;			
				}
			while(choice!=0 && choice==1);
			break;
			}
			case 2:{system("cls");
					for(int i=0;i<vh.size();i++){
						
						cout<<i+1<<" .Name: "<<vh[i].name<<endl;
						cout<<i+1<<"Age: "<<vh[i].name<<endl;
						cout<<i+1<<"Contact: "<<vh[i].name<<endl;
						cout<<i+1<<"Blood Group: "<<vh[i].name<<endl;
						cout<<i+1<<"Address: "<<vh[i].name<<endl;
						
					}
				
				
				
				break;
			}
			
			case 3:
				{system("cls"); 
					string n;
					cout<<" Enter Name To Discharge: ";cin>>n;
					for(int i=0;i<vh.size();i++)
					{
						if(n==vh[i].name)
						{
							
							cout<<i+1<<". Name"<<vh[i].name<<endl;
							cout<<" Age: "<<vh[i].age<<endl;
							cout<<" Contact: "<<vh[i].contact<<endl;
							cout<<" Blood Group: "<<vh[i].bloodG<<endl;
							cout<<" Address: "<<vh[i].address<<endl;
							vh.erase(vh.begin()+i);
						
						}
						cout<<" Patient Discharged "<<endl;
						cout<<" No of Admitted Patient: "<<vh.size()<<endl<<endl;
			
					}
					break;
				}
		
		case 4: {
			exit(0);
			break;
		}
		default:{system("cls");
		cout<<" Invalid Input "<<endl<<endl;
			break;
			
		}
			
		}
	
	}
	
}