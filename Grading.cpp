#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"Give the marks of student"<<endl;
	cin>>a;
	
	if(a>=80 && a<=100)
	cout<<"Grade A"<<endl;
	
	else if(a>=60 && a<=79)
	cout<<"Grade B"<<endl;

	else if(a>=50 && a<=59)
	cout<<"Grade C"<<endl;
	
	else
	cout<<"Apka bacha fail ho gaya hai janab"<<endl;
	
	getch();
	return 0;
}

