#include<iostream>

using namespace std;

int main() {
    int marks[5]={5,4,3,9,12};
    int n = sizeof(marks)/sizeof(int);
    int max = marks[0];
    for (int i = 0; i < n; ++i) {
        if (marks[i]>max) {
            max = marks[i];
        }
    }
    cout<<"largest = "<<max <<endl;
    return 0;
}