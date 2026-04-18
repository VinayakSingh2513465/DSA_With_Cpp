#include<iostream>
#include<string>

using namespace std;

class Student { // must start with upper case letter
    //properties...

    string name;
    float cgpa;

    //methods
public:
     void getPercentage() {
         cout << (cgpa * 10) << "% \n";
     }

    //setters
    void setName(string nameVal) {
         name =  nameVal;
    }
    void setCgpa(float cgpaval) {
         cgpa = cgpaval;
    }

    //Getters
    string getName() {
         return name;
    }
    float getCgpa() {
         return cgpa;
    }
};

class user {
    int id;
    string username;
    string password;
    string bio;

    void deactivate() {
        cout << "deleting account\n";
    }
};
int main() {
    Student s1;// s1 is an object of class student
    // using setters function
    s1.setName("vinayak");
    s1.setCgpa(10);
    // using getters function
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    Student s2; // s2 is an object of class student
    return 0;
}
// refer copy (notes)