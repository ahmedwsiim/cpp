#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int a[2][2];
 int b[2][2];
 int c[2][2];
 int i,j;
 
 cout<<"Give value of matrix 1"<<endl;
 for(i=0;i<2;i++)
 	for(j=0;j<2;j++)
 	cin>>a[i][j];
 	
cout<<"Give value of matrix 2"<<endl;
 for(i=0;i<2;i++)
 	for(j=0;j<2;j++)
 	cin>>b[i][j];
 	
for(i=0;i<2;i++)
 	for(j=0;j<2;j++)
 	c[i][j]=a[i][j]+b[i][j];
 	
for(i=0;i<2;i++)
 	for(j=0;j<2;j++)
	cout<<c[i][j]<<endl;
 	
	getch();
	return 0;
}
