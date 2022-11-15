#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[4][4];
	int i,j;
	int sum = 0;
	cout<<"Enter the matrix of order 4x4"<<endl;
	// value ki entry
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<4;i++) // i ka hona represents k row ko operate kar rahey hain
	{
		sum = 0;
		for(j=0;j<4;j++)
		{
			sum = sum + a[i][j];
		}
		cout<<"Sum of each element of Row "<< i+1<<" is : "<< sum<<endl;
	}
	
	for(j=0;j<4;j++) // j ka hona represents k column ko operate kar rahey hain
	{
		sum = 0;
		for(i=0;i<4;i++){
			sum = sum + a[i][j];
		}
		cout<<"Sum of each element of Column: " << i+1<<" is " <<sum<<endl;
	}

	getch();
	return 0;
}
