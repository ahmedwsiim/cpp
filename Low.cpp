#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10];
	 int i;
	 int low;
	 
cout<<"Give value of array"<<endl;
	for(i=0;i<10; i++)
	cin>>a[i];
	for(i=0; i<10; i++)
	
		if(a[i]<low)
		low=a[i];
		
		cout<<"The lowest
		 value : "<<low<<endl;


	return 0;
}

