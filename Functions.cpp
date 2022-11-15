#include<iostream>
#include<conio.h>
using namespace std;

int product(int a, int b, int c)
{
	int d;
	d = a*b*c;
	return d;
}
int main()
{
	
	int m,n,p,e;
	cout<<"give value of m,n,p "<<endl;
	cin>>m>>n>>p;
	e = product(m,n,p);
	cout<<"The product is = "<<e<<endl;
	getch();
	return 0;
	
}
