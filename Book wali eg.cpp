//Write a program to input an array of 10 book (bid, btitle, price) structures and display the
//input data
#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
	int bid;
	char btitle[40];
	float bprice;
};

int main()
{
	book b[10];
	int i;
	cout<<"Give Book Data"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>b[i].btitle;
		cin>>b[i].bid;
		cin>>b[i].bprice;
	}
	cout<<"You entered"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Book Title : "<<b[i].btitle<<endl;
		cout<<"Book ID : "<<b[i].bid<<endl;
		cout<<"Book Price : "<<b[i].bprice<<endl;
	}
	getch();
	return 0;
}
