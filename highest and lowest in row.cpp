//Write a program to input a matrix of order 4*4 and display the highest and lowest number in each row separately.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j;
	int a[i][j];
	int high;
	
	cout<<"Give value of array"<<endl;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
		
		for(i=0;i<4;i++)
		{
			high=a[i][0];
			for(j=0;j<4;j++)
		{
			if(a[i][j]>high)
			high = a[i][j];
		}
		cout<<"The highest value is : "<<high<<endl;
		}
		getch();
		return 0;
	
}
