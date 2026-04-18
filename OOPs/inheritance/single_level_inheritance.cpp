#include<iostream>
#include<string>
using namespace std;

class Animal {

public:
    string color;
    void eat() {
        cout<<"eats\n";
    }
    void breadth() {
        cout<<"breadths\n";
    }
};

class Fish : public Animal {
public:
    int fins;

    void swim() {
        cout<<"swims\n";
    }

};

int main() {
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    // not work if inheritance is protected
    f1.eat();
    f1.breadth();
    return 0;
}
