#include<iostream>
using namespace std;

int main() {
    bool isAdult;
    int age;
    cout<<"enter age: ";
    cin>>age;
    if (age >= 18)
    {
        isAdult = true;
    }
    else {
        isAdult = false;
    }
    //isAdult = age>= 18?true:false;
    cout<<isAdult;


}
