#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[10];
int i;
int high;

cout<<"Give values of array"<<endl;
	for(i=0; i<10; i++)
		cin>>a[i];
	for(i=0; i<10; i++)
	
		if (a[i]>high)
			high=a[i];
cout<<"Highest Value of Array is : "<<high<<endl;
getch();
return 0;
}

