#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int i;
 int a[10];
 int product = 1;
 
	cout<<"Give value of array"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		product = product*a[i];
	}
	cout<<"Product of array is : "<<product<<endl;
	

	getch();
	return 0;
}

