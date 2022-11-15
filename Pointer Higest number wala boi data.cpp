#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
	char name[40];
	int rollno;
	float marks;
};

int main()
{
	int high, loc;
	student *s
	s = new student [10];
	int i;
	
	cout<<"Enter data"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>(s+i)->name;
		cin>>(s+i)->rollno;
		cin>>(s+i)->marks;
	}
	
	high = (s+0)->marks;
	loc = 0;
	for(i=0; i<10 ; i++)
	{
		if((s+i)->marks>high)
		{
		
		high = (s+i)->marks;
		loc = i;
		}
	}
	cout<<"Data of student having highest marks"<<endl;
	cout<<"Roll no "<<(s+loc)->rollno<<endl;
	cout<<"Marks "<<(s+loc)->marks<<endl;
	cout<<"Name "<<(s+loc)->name<<endl;
	delete {}s;
	getch();
	return 0;
	
}
