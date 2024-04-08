#include<iostream>
using namespace std;

display(int matrix[][50], int value)
{
		for(int row=0; row<value; row++)
	{
		for(int col=0; col<value; col++)
		{
			cout<<matrix[row][col]<<" ";
		}
		cout<<endl;
	}
	
cout<<endl<<endl;
}

Flip(int matrix[][50], int value)
{
	for(int row=0; row<value; row++)
	{
		int start= 0;
		int end = value-1;
		
		while(start < end)
		{
			swap(matrix[row][start], matrix[row][end]);
			start++;
			end--;
			
		}
	}
	
	for(int col=0; col<value; col++)
	{
		int start =0;
		int end = value-1;
		while(start < end)
		{
			swap(matrix[start][col], matrix[end][col]);
			start++;
			end--;
			
		}
	}
}

int main()
{
	int matrix[50][50];
	int size;
	
	cout<<"Enter size of matrix: ";
	cin>>size;
	
	cout<<endl;
	for(int row=0; row<size; row++)
	{
		for(int col=0; col<size; col++)
		{
			cout<<"Enter element for ["<<row<<"]["<<col<<"]: ";
			cin>>matrix[row][col];
			
		}
	}
	
	cout<<"Original matrix: "<<endl;
	display(matrix, size);
	
	cout<<endl;
	
	Flip(matrix,size);
	cout<<"matrix after square flip: "<<endl;
	display(matrix, size);
	
	
	
	
	
	
}//main