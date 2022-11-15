#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	int a[4][4];
	int sum = 0;
	
	cout<<"Give value of matrix"<<endl;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			{
				cin>>a[i][j];
			}
			
	sum=0;
	for(i=0;i<2;i++)
	{ 
		for(j=0;j<2;j++)
		if(i==j)
		sum = sum + a[i][j];
	}	
	cout<<"The sum of diagonal is : "<<sum<<endl;
	
	sum=0;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
		if(i + j == 3)
		sum = sum + a[i][j];
		}
	
	cout<<"The sum of diagonal is : "<<sum<<endl;
	getch();
	return 0;
}
