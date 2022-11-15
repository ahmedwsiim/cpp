#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	int sum;
	int sign;
	sum=0;
	sign=1;
	
	for(i=0;i<10;i++)
	{
		sum=sum+i;
		sign=sign*(-1);
	}
		cout<<"Sum is : "<<sum<<endl;
	getch();
	return 0;
}

