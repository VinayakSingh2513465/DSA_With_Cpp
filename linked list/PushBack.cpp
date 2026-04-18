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

    void push_front(int val) {
        Node* newNode = new Node(val); // dynamic memory allocation

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail=newNode;
        }
    }
};

int main() {
    Node n1(5);
    list ll();
    cout<<n1.data<<endl; // 5
    cout<<n1.next<<endl; // NULL or 0 value will be printed
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
}
