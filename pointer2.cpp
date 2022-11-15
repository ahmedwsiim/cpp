#include<iostream>
#include<conio.h>
using namespace std;
struct product
{
	char pname[40];
	int pid;
	int qty;
};

int main()
{
	product*p;
	p= new product[10];
	int i;
	cout<<"Enter data"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>(p+i)->pid;
		cin>>(p+i)->pname;
		cin>>(p+i)->qty;
	}
	cout<<"You entered"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<(p+i)->pid<<endl;
		cout<<(p+i)->pname<<endl;
		cout<<(p+i)->qty<<endl;
	}
	delete [] p;
	getch();
	return 0;
	
}
