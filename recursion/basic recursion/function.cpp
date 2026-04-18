#include<iostream>

using namespace std;

void function() {
    cout<<"work";
    function();  // code does not contain any base case
}

int main() {
    function();
}
