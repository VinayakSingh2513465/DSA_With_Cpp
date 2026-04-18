#include<iostream>

using namespace std;

int pow(int x , int n) { // O(log(n))
    if (n==0) {
        return 1; // base case
    }
    int halfPow=pow(x,n/2); // faith
    int halfPowerSquare = halfPow * halfPow; // work

    if (n%2 != 0) {
        //odd
        return x * halfPowerSquare;
    }
    return halfPowerSquare;
}

int main() {
    cout<<pow(2,10);
    return 0;
}
