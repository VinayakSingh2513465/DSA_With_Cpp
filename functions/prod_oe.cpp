#include<iostream>
using namespace std;
int prod(int a , int b) {
    int prod = a * b;
    return prod;
}
int gr(int a , int b) {
    if (a>b) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    int a , b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int product = prod(a,b);
    int greater1 = gr(a,b);
    cout<<product<<" "<<greater1;
}