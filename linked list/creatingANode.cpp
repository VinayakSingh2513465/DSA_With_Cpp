#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};


int main() {
    Node n1(5);
    cout<<n1.data<<endl; // 5
    cout<<n1.next<<endl; // NULL or 0 value will be printed
}
