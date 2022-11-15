#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
	int i,p;
	p=1;
	for(i=0;i<=n;i++)
	p=p*i;
	return p;
}
int main()
{
	int m,q;
	cout<<"Give value of m"<<endl;
	cin>>m;
	q=fact(m);
	cout<<"Factorial is equal to = "<<q<<endl;
	getch();
	return 0;
}
