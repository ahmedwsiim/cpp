#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10];
	int i;
	int loc = 0;
	int high;
	
	cout<<"Give value of array"<<endl;
		for(i=0; i<10; i++)
	{
		cin>>a[i];
	}
	for(i=0; i<10; i++)
		if(a[i]>high)
			high = a[i];
			loc = i;
	cout<<"The Highest value is : "<<high<<endl;
	cout<<"Location is : "<<loc<<endl;
	getch();
	return 0;
}
