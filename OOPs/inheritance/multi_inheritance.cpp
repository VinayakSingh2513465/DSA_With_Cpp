#include<iostream>
#include<string>

using namespace std;

class Animal {
public:
    void eat() {
        cout<<"eats\n";
    }
    void breadth() {
        cout<<"breadth\n";
    }
};

class Mammal : public Animal {
public:
    string bloodType;

    Mammal() {
        bloodType = "warm";
    }
};

class dog : public Mammal {
public:
    void tailWag() {
        cout<<"a dog wags it tail\n";
    }
};

int main() {
    dog d1;
    d1.eat();
    d1.breadth();
    d1.tailWag();
    cout<<d1.bloodType<<endl;
}
