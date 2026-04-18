#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:
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
};

int main() {
    Car c("maruti 800" , "white");
    cout<<"car name : "<<c.getName()<<endl;
    return 0;
}
