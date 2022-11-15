using namespace std;
#include<iostream>
#include<conio.h>

struct product
{
	int pid;
	char pname[50];
	int qty;
};

int main()
{
	product p[2];
	int i;
	cout<<"Give data"<<endl;
	for(i=0;i<2;i++)
	{
		cin>>p[i].pid;
		cin>>p[i].pname;
		cin>>p[i].qty;
	}
	cout<<"You entered"<<endl;
	for(i=0;i<2;i++)
	{
		cout<<"Product ID : "<<p[i].pid<<endl;
		cout<<"Product Name : "<<p[i].pname<<endl;
		cout<<"Product Quantity : "<<p[i].pid<<endl;
	}


	getch();
	return 0;
}
