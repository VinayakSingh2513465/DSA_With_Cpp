#include<iostream>
using namespace std;
int fact(int a) {
    int fact = 1;
    for (int i = 1; i <= a; ++i) {
        fact = fact * i;
    }
    return fact;
}
int bincoeff(int n , int r) {
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);
    int result = val1/(val2*val3);
    return result;
}
int main() {
    cout<< bincoeff(3,2)<<endl;
    return 0;
}
