#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	int a[10];
	int b[10];
	int c[10];
	
	cout<<"Give value of array 1"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Give value of array 2"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<10;i++)
	{
	  	c[i] = a[i] + b[i];
	  	cout<<c[i]<<endl;
	}
	
	getch();
	return 0;
}
