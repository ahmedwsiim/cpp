#include<iostream>
#include<conio.h>
using namespace std;
int high(int a,int b, int c)
{
	if (a>b && b>c)
	return a;
	else if(b>a && b>c)
	return b;
	else
	return c;
}
int main()
{
	int m,n,o,p;
	cout<<"Give value of m , n , o"<<endl;
	cin>>m>>n>>p;
	p=high(m,n,p);
	cout<<"Highest value is equal to = "<<p<<endl;
	getch();
	return 0;
}
