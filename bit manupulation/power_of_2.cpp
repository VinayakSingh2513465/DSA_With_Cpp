#include<iostream>

using namespace std;

int main() {
    int num;
    cin>>num;
    if (!(num & (num-1))) {
        cout<<true;
    }
    else {
        cout<< false;
    }
}
