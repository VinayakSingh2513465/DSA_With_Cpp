#include<iostream>
#define PI 3.14 // macros defined
using namespace std;
int main() {
    int r;
    cout<<"Enter radius of a circle: "<<endl;
    cin>>r;
    double area = PI*r*r;
    cout<<area;

}
