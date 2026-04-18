#include<iostream>

using namespace std;
//pass by value...
// void changeA(int a) {
//     a=20;
//     cout<<a<<endl;
// }
// //pass by reference....
// void changeA(int * ptr) {
//     *ptr = 20;
//     cout<<*ptr<<endl;
// }
//pass by reference using reference variables

void changeA(int &param) {
    param=20;
    cout<<param<<endl;
}
int main() {
    int a = 10;
    changeA(a);
    cout<<a<<endl;
    return 0;
}
