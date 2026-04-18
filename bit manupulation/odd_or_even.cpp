#include<iostream>

using namespace std;

void oddOrEven(int num) {
    if (!(num & 1)) {
        cout << "even\n";
    }
    else {
        cout << "odd\n";
    }
}

int main() {
    oddOrEven(5);
    oddOrEven(8);
    return 0;
}
