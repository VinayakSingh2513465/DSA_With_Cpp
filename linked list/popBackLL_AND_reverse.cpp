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

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
    // inserting a node in between the linked list...
    void insert(int val , int pos) {
        Node* newNode = new Node(val);

        Node* temp = head;
        for (int i = 0; i < pos -1; ++i) {
            if (temp == NULL) {
                cout<<"position is invalid\n";\
                return;
            }
            temp = temp->next;
        }
        // temp is now at pos-1 i.e prev/left
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front() {
        if (head == NULL) {
            cout<<"LL is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        Node* temp = head;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key) {
        Node* temp = head;
        int k = 0;
        while (temp!= NULL) {
            if (temp->data == key) {
                return k;
            }
            temp = temp->next;
            k++;
        }
        return -1;
    }

    void reverse() {
        Node* curr = head;
        Node* prev = NULL;
        tail = head;
        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
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
