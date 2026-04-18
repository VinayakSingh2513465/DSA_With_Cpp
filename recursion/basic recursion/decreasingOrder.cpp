#include <iostream>
using namespace std;

void print(int n) {
    if (n==0) {
        return;
    }
    cout<<n<<" "; // kaan
    print(n-1); // faith , next call
}

int main() {
    print(5);
}
