// create a user class with properties :
// id (private) , username (public) & password(private)..
// Tis id should be initialized in a parameterised constructor
// it should have a getter and setter for password


#include<iostream>

using namespace std;

class User {
    int id;
    long int password;

public:
    string username;
    User(int ids) {
        this->id = ids;
    }
    //setter
    void setPassword(int pass) {
        password = pass;
    }
    //getters
    int getPassword() {
        return password;
    }
};

int main() {
    User u1(101);
    u1.username="Vinayak";
    u1.setPassword(5479);

    cout<<"username :"<<u1.username<<endl;
    cout<<"password :"<<u1.getPassword()<<endl;

}

