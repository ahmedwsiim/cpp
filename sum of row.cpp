//Write a program to input a matrix of order 3*4 and display the sum of each row and column separately.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][4];
	int i,j;
	int sum = 0;
	
	cout<<"Give value of matrix"<<endl;
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
	{
		cin>>a[i][j];
	}
	for(i=0; i<3; i++)
		{
			for(j=0; j<4; j++)
			sum = sum + a[i][j];
		}
		cout<<"sum is row "<<i<<" is "<<sum<<endl;
		getch();
		return 0;
	
}
