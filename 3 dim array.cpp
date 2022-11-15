//Write the program to input an array of order 2*3*4 and display the input data
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[2][2][2];
	int i,j,k;
	
	cout<<"Give value of array"<<endl;
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				for(k=0;k<2;k++)
			{
				cin>>a[i][j][k];
			}
	cout<<"You entered"<<endl;
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				for(k=0;k<2;k++)
			{
				cout<<a[i][j][k]<<endl;
			}
			getch();
			return 0;
}
