#include<iostream>
#include<string>

using namespace std;

class Teacher {
public:
    int salary;
    string subject;
};

class student {
public:
    long long int rollno;
    float cgpa;
};

class TA : public Teacher , public student {
public:
    string name;

};

int main() {
    TA tal;
    tal.name = "vinayak singh";
    tal.subject = "c++";
    tal.cgpa = 9.1;
    tal.rollno=2501641540225;

    cout<<tal.name<<endl;
    cout<<tal.rollno<<endl;
    cout<<tal.subject<<endl;
    cout<<tal.cgpa<<endl;
}
