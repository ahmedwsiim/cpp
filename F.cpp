using namespace std;
#include<iostream>
#include<conio.h>
void function1();
void function2()
{ 
static int i=0;
cout<<"I="<<i<<endl;
i++;
}
int main()
{
cout<<"Now you are in the main function"<<endl;
function1();
getch();
return 0;
}
