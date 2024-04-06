#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int totalMarks, obtainMarks;
	float percent = 0.0, gpa;
	cout<<"Enter your total marks: (in integars)"<<endl;
	cin>>totalMarks;
	cout<<"Enter your obtain marks: (in integars)"<<endl;
	cin>>obtainMarks;
	if(obtainMarks<=totalMarks)
	{
		percent=100*float(obtainMarks)/float(totalMarks);
		
		
	}
	else{
		cout<<"Incorrect Obtain Marks";
		
	}
		if((percent>=90) && (percent<=100)){
			
			gpa = 4.00;
			
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"A+\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
		}
			
		
		else if((percent>=85) && (percent<=89.99))
		{
				gpa = 4.00;
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"A\" "<<endl;
			cout<<"Your Percentage is:"<<percent<<endl;
	
			
			}	
		
		else if((percent>=80)&&(percent<=84.99))
		{
			gpa = (percent*3.66)/80; 
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"A-\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
	
		}
		
		else if((percent>=75)&&(percent<=79.99))
		
		{
			gpa = (percent*3.33)/75;
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"B+\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
		
		}
		
		else if((percent>=71)&&(percent<=74.99))
		{
			gpa = (percent*3.00)/71;
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"B\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
			
			
		}
		else if((percent>=68)&&(percent<=70.99))
		{
			gpa = (percent*2.66)/68;
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"B-\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
			
			
		}
		else if((percent>=61)&&(percent<=67.99))
		{
			gpa = (percent*2.00)/61;
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"C\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
		
		}
		else if((percent>=50)&&(percent<=60.99))
		{
			gpa = (percent*1.00)/50;
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"D\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
			
			
		}
		else if((percent<50)&&(percent<=0.00))
		{
			gpa = 0;
			cout<<"Your GPA is:"<<setprecision(2)<<gpa<<endl;
			cout<<"Your Grade is \"F\" "<<endl;
			cout<<"Your Percentage is:"<<setprecision(2)<<percent<<endl;
			
		}
		return 0;
		
	}
	
	
	
