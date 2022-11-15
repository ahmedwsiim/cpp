#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	int result;
	
 cout<<"Give value of a"<<endl;
 cin>>a;
 cout<<"Give value of b"<<endl;
 cin>>b;
 cout<<"Give value of c"<<endl;
 cin>>c;
 
 result = (b*b-4*a*c)/2*a;
 
 cout<<"The result is : "<<result<<endl;

	getch();
	return 0;
}

