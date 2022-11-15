#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	int a[4][4];
	int sum = 0; 
	
	cout<<"Give value of the matrix"<<endl;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	for(i=0;i<4;i++)
	{
		sum=0;
		for(j=0;j<4;j++)
		sum=sum+a[i][j];
		cout<<"The sum of the row "<<i<<" is : "<<sum<<endl;
		
	}
	
	for(j=0;j<4;j++)
	{
		sum=0;
		for(i=0;i<4;i++)
		sum=sum+a[i][j];
		cout<<"The sum of the column "<<j<<" is : "<<sum<<endl;
	}
	getch();
	return 0;
	
	
}
