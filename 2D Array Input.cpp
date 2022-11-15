#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int a[3][4];
 int i,j;
 
 cout<<"Give value of matrix"<<endl;
 for(i=0;i<3;i++)
 	for(j=0;j<4;j++)
 	cin>>a[i][j];
 	
 for(i=0;i<3;i++)
 	for(j=0;j<4;j++)
 	{
	 
 	cout<<"Your data is : "<<a[i][j]<<endl;
	}
	getch();
	return 0;
}
