#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	int a[5];
	int high,loc=0;
	
	
	cout<<"Give value of array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>high)
		high = a[i];
		loc=i;
	}
	cout<<"Highest Number  :  "<<high<<endl;
	cout<<"Location is  :  "<<loc<<endl;
	getch();
	return 0;
}

