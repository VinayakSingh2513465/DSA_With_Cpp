#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"Enter no of rows for inverted pyramid"<<endl;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = n; j > i ; j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
