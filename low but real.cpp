#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	int a[10];
	int i;
	int low;
	low=0;
	cout<<"Give value of array"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	low=a[i];
   for(i=0;i<10;i++)
   {
   	if(a[i]<low)
   	low=a[i];
   }
   cout<<"the lowest is:"<<low<<endl;
	getch();
	return 0;
}

