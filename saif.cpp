#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
    int A,B,C;
    cout << "Enter three integers A,B and C: "<<endl;
    cin >> A >> B >> C;
    if (A%2==0 && B%2==0 && C%2==0 && A>=2 && A<=100 && B>=2 && B<=100 && C>=2 && C<=100) {
        if (A>B && A>C) {
            cout << "Highest value is " << A << endl;
        } else if (B>A && B>C) {
            cout << "Highest value is " << B << endl;
        } else {
            cout << "Highest value is " << C << endl;
        }
    } else {
        cout << "Invalid input" << endl;
    }
    getch();
    return 0;
}
