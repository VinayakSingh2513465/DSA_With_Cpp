#include<iostream>
using namespace std;

int main() {
    int n;

    do {
        cout <<"Enter number: ";
        cin >> n;
        if (n%10==0) {
            break;
        }
        cout<<"you enterd"<<n<<endl;
    } while (true);
    return 0;
}