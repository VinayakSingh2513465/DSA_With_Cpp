#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:
    Car() {
        cout<<"Constructior without parameter\n";
    }
    Car(string name , string color) {
        cout<<"Constructior is called, object being created..\n";
        // (this->name is of string name) and (name is name parameter which is passsed)
        this->name = name;
        this->color = color;
    }
    void start() {
        cout << "car has started"<<endl;
    }
    void stop() {
        cout << "car has stopped"<<endl;
    }
    string getName() {
        return name;
    }
    string getColor() {
        return color;
    }
};

int main() {
    Car c0;
    Car c1("maruti 800" , "white");
    Car c2("fortuner" , "white");
    cout<<"car name : "<<c1.getName()<<" "<<c1.getColor()<<endl;
    cout<<"car name : "<<c2.getName()<<" "<<c2.getColor()<<endl;
    return 0;
}
