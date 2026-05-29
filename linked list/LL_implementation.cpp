#include<iostream>
using namespace std;
// class node....created
// also node is a custom data type in c++ each class you create it's a custom datatype.......
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
    ~Node() {
        //cout<<"node destructor for data = "<<data<<endl;
        if (next != NULL) {
            delete next;
            next=NULL;
        }
    }
};

class list {
    Node* head;
    Node* tail;

public:
    list() {
        head = NULL;
        tail = NULL;
    }
    ~list() {
        //cout<<"distructor of list\n"<<endl;
        if (head != NULL) {
            delete head;
            head = NULL;
        }
    }
    // function for pushing in front of linked list...
    void push_front(int val) {
        Node* newNode = new Node(val); // dynamic allocated memory
        // statically node creation ... Node* newNode(val)...

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }
    // function for pushing in last(tail position) of linked list...
    void push_back(int val) {
        Node* newNode = new Node(val); // dynamic allocated memory
        // statically node creation ... Node* newNode(val)...

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList() {
        Node* temp = head;
        while (temp!=NULL) {
            cout<<temp->data <<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
    // inserting a node in between the linked list....
    void insert(int val,int pos) {
        Node* newNode = new Node(val);

        Node* temp = head;
        for (int i = 1; i < pos-1; ++i) {
            if (temp ==  NULL) {
                cout<<"Position is invalid\n";
                return;
            }
            temp = temp->next;
        }
        //temp is now at pos-1  prev/left
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
        temp->next =NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key) {
        Node* temp = head;
        int k = 0 ;
        while (temp!= NULL) {
            if (temp->data == key) {
                return k;
            }
            temp = temp->next;
            k++;
        }
        return -1;
    }

    int helper(Node* temp , int key) {

        if (temp == NULL) {
            return -1;
        }

        if (temp->data == key) {
            return 0;
        }

        int idx = helper(temp->next , key);
        if (idx == -1) {
            return -1;
        }
        return idx+1;
    }
    int searchRec(int key) {
        return helper(head,key);
    }

    void reverse() {
        Node* curr = head;
        Node* prev = NULL;
        tail = head;
        while (curr !=  NULL) {
            Node* next = curr->next;
            curr->next = prev;

            //updation... for next itr
            prev = curr;
            curr=next;
        }
        head = prev;
    }
    int getSize() {
        int sz = 0;
        Node* temp = head;
        while (temp!= NULL) {
            temp = temp->next;
            sz++;
        }
        return sz;
    }
    void removeNth(int n) {
        int size = getSize();
        Node* prev = head;

        for (int i = 0; i < (size -n); ++i) {
            prev = prev->next;
        }
        Node* toDel = prev->next;
        cout<<"going to delete : "<<toDel->data<<endl;
        prev->next = prev->next->next;
    }
};
int main() {
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();
    ll.insert(6,6);
    ll.printList();
    //ll.pop_back();
    //cout<<ll.searchItr(2)<<endl;
    //cout<<ll.searchRec(3)<<endl;
    ll.removeNth(3);
    ll.printList();
    ll.reverse();
    ll.printList();

    ll.pop_back();
    ll.pop_front();
    ll.printList();
}
