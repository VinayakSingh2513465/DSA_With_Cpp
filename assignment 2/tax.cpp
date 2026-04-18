#include<iostream>
using namespace std;
int main() {
    int principle;
    float rate;
    int time;
    double si;
    cout<<"Enter p r and time: "<<endl;
    cin>>principle;
    cin>>rate;
    cin>>time;
    si = ((float)principle*rate*(float)time)/100;
    cout<<si;
}
