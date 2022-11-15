#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][4];
	int b[3][4];
	int c[3][4];
	int i,j;
		cout<<"Give value of Matrix A"<<endl;
		for(i=0;i<3;i++)
			for(j=0;j<4;j++)
			{
				cin>>a[i][j];
			}
		
		cout<<"Give value of Matrix B"<<endl;
		for(i=0;i<3;i++)
			for(j=0;j<4;j++)
			{
				cin>>b[i][j];
			}	
		
		for(i=0;i<3;i++)
			for(j=0;j<4;j++)
			c[i][j] = a[i][j] + b[i][j];
			
		for(i=0;i<3;i++)
			for(j=0;j<4;j++)
			cout<<"The result is : "<<c[i][j]<<endl;
			getch();
			return 0;
			
}
