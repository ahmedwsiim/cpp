// Write a program to input an array of 10 product (pid, pname, qty) and display data of the product having the highest quantity
#include<iostream>
#include<conio.h>
using namespace std;

struct product
{
	int pid;
	char pname[50];
	int qty;
};

int main()
{
	product p[10];
	int i;
	cout<<"Give data"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>p[i].pname;
		cin>>p[i].pid;
		cin>>p[i].qty;
	}
	cout<<"You entered"<<endl;
	int high = p[0].qty;
	int loc = 0;
	for(i=0;i<10;i++)
	{
		if(p[i].qty>high)
		{
		p[i].qty = high;
		loc = i;
		}
	}
	cout<<"ID : "<<p[loc].pid<<endl;
	cout<<"Name : "<<p[loc].pname<<endl;
	cout<<"Quantity : "<<p[loc].qty<<endl;
	getch();
	return 0;
}
