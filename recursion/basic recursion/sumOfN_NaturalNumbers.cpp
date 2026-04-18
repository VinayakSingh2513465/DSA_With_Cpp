#include<iostream>

using namespace std;

int NaturalNum(int n) {
    if(n==0) {
        return 0;
    }
    return n+NaturalNum(n-1); // recurrence relation
}

int main() {
    cout<<NaturalNum(100);
}
