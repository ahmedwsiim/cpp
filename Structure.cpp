// Write a program to input two student(rollno, marks) structures and display the input data.

#include<iostream>
#include<conio.h>
using namespace std;

struct Student
{
	int rollno;
	float marks;
};

int main()
{
	Student s1,s2;
	
	cout<<"Give Roll # of 1st student : "<<endl;
	cin>>s1.rollno;
	
	cout<<"Give marks of 1st student : "<<endl;
	cin>>s1.marks;
	
	cout<<"Give Roll # of 2nd student : "<<endl;
	cin>>s2.rollno;
	
	cout<<"Give marks of 2nd student : "<<endl;
	cin>>s2.marks;
	
	
	cout<<"Data of student 1 "<<endl;
	cout<<"Roll # "<<s1.rollno<<" , "<<"Marks "<<s1.marks<<endl;
	
	cout<<"Data of student 2 "<<endl;
	cout<<"Roll # "<<s2.rollno<<" , "<<"Marks "<<s2.marks<<endl;
	getch();
	return 0;
}
