#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    // 🔸 Insert at Head (O(1))
    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // 🔸 Insert at Tail (O(1))
    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (tail == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    // 🔸 Delete from Head (O(1))
    void deleteFromHead() {
        if (head == NULL) return;

        Node* temp = head;

        if (head == tail) {
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

    // 🔸 Delete from Tail (O(1))
    void deleteFromTail() {
        if (tail == NULL) return;

        Node* temp = tail;

        if (head == tail) {
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }

        delete temp;
    }

    // 🔸 Display Forward
    void displayForward() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // 🔸 Display Backward
    void displayBackward() {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtHead(10);
    dll.insertAtHead(5);
    dll.insertAtTail(20);
    dll.insertAtTail(30);

    cout << "Forward: ";
    dll.displayForward();

    cout << "Backward: ";
    dll.displayBackward();

    dll.deleteFromHead();
    dll.deleteFromTail();

    cout << "After deletion: ";
    dll.displayForward();

    return 0;
}