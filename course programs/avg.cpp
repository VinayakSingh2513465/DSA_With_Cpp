#include<iostream>
using namespace std;
int main()
{
    int eng;
    int sci;
    int maths;
    float avg;
    cout<<"enter english marks :"<<endl;
    cin>>eng;

    cout<<"enter sci marks :"<<endl;
    cin>>sci;

    cout<<"enter maths marks :"<<endl;
    cin>>maths;

    avg = (eng + sci + maths)/3;
    cout<<"The average marks are "<<avg<<endl;
    
    return 0;
}
