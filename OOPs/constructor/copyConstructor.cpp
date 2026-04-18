#include<iostream>

using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;
    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; // Dynamic Allocation by new keyword
        *mileage = 12;
    }
    Car(Car &original) { // copy constructor
        cout<<"copying original to new ..\n";
        name = original.name;
        color=original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }
    ~Car() {
        cout<<"deleting object";
        if (mileage!= NULL) {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main() {
    Car c1("maruti 800","white");
    Car c2(c1);
    cout<<c2.name<<endl; // maruti800
    cout<<c2.color<<endl; // white
    //cout<<*c2.mileage<<endl;
    *c2.mileage=10;
    cout<<*c1.mileage<<endl;
    return 0;
}
