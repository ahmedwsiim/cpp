#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[4][4];
	int i,j,sum=0;
	
	cout<<"Give value of matrix"<<endl;
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
	cin>>a[i][j];
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
{
	sum=0;
	sum=sum+a[i][j];
}
cout<<"Sum ="<<sum<<endl;
	getch();
	return 0;
}

