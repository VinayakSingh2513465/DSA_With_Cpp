#include<iostream>
#include<vector>
using namespace std;

//crate stack using vector
template<class T>
class stack {
    vector<T> vec;
public:
    void push(T val) { //o(1)
        vec.push_back(val);
    }

    void pop() { //o(1)
        if (isEmpty()) {
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }

    T top() { //o(1)
        // if (isEmpty()) {
        //     cout<<"stack is empty.\n";
        //     return -1;
        // }
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty() {
        return vec.size() == 0;
    }
};

int main() {

    stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');

    while (!s.isEmpty()) {
        cout<<s.top()<<", ";
        s.pop();
    }
    return 0;
}
