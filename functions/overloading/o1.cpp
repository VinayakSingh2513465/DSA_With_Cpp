#include<iostream>

using namespace std;

int sum(int a , int b) {
    cout << (a+b) <<endl;
    return (a+b);
}
double sum(double a , double b) {
    return (a+b);
}

int main() {
    cout<<sum(2,3)<<endl;
    cout<<sum(1.1,5.6)<<endl;
    return 0;
}
