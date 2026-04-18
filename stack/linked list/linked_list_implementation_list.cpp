#include<iostream>
#include<vector>
#include<list>
using namespace std;

//crate stack using linked list
template<class T>
class Node {
    T data;
    Node* next;

public:
    Node(T val) {
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack {
    list<T> ll;

public:
    void push(T val) {
        ll.push_front(val);
    }
    void pop() {
        ll.pop_front();
    }
    T top() {
        return ll.front();
    }
    bool isEmpty() {
        return ll.size()==0;
    }
};


int main() {

    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty()) {
        cout<<s.top()<<", "; // 1,2,3,
        s.pop();
    }
    return 0;
}
