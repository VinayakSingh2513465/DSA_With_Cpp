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
    ~Node() {
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

class list {
    Node* head; // stores the address of first node...but NULL initially
    Node* tail; // stores the address of last node...but NULL initially

    list() {
        head = NULL;
        tail = NULL;
    }
    ~list() {
        if (head != NULL) {
            delete head;
            head = NULL;
        }
    }
};

int main() {
    Node n1(5);
    cout<<n1.data<<endl; // 5
    cout<<n1.next<<endl; // NULL or 0 value will be printed
}
