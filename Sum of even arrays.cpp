#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int i;
 int a[10];
 int sum = 0;
 
 cout<<"Give value of array"<<endl;
 for(i=0;i<10;i++)
 {
 	cin>>a[i];
 }

 for(i=0;i<10;i++)
 {
 	if(a[i]%2==0)
 	sum = sum + a[i];
 }
cout<<"Sum of even members of array is : "<<sum<<endl;
	getch();
	return 0;
}

