//Write a program to input array of 10 elements and display the highest value together with its location.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	int a[10];
	int loc = 0;
	int high = a[0];
	
	cout<<"Give value of array"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
	  if(a[i]>high)
	  high = a[i];
	  loc = i;
	}
	cout<<"THE HIGHEST VALUE IS : "<<high<<endl;
	cout<<"THE LOCATION IS : "<<loc<<endl;
	getch();
	return 0;
}
