#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	int a[10];
	
	cout<<"Give value of array"<<endl;
	for(i=0;i<10;i++)
	{
	cin>>a[i];
	}
	cout<<"Your data is "<<endl;
		for(i=0;i<10;i++)
		cout<<a[i]<<endl;
	getch();
	return 0;
}

