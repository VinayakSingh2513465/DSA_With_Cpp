#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int age = 25;
    int marks = -200;
    char grade = 'A';
    bool isAdult = true;
    float PI = 3.14159265359;
    double PI2 = 3.14159265359;
    cout << "size of int =" << sizeof(int) << endl;
    cout << "size of char =" << sizeof(char) << endl;
    cout << "size of bool = " << sizeof(bool) << endl;
    cout<<setprecision(12)<<"PI ="<<PI<<endl;
    cout<<setprecision(12)<<"PI2 ="<<PI2<<endl;
    return 0;
}
