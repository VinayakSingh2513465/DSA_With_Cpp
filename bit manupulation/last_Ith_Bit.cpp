//
// WAF to clear last i bits of a number.
// num = 15 , i = 2;

#include<iostream>

using namespace std;

void clearIbiths(int num , int i) {
    int bitMask = (~0)<<i;
    num = num & bitMask;

    cout << num <<endl;
}
int main() {
    clearIbiths(15,2);
}


