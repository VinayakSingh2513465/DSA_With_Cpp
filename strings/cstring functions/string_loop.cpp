#include<iostream>
#include<string>

using namespace std;

int main() {
    string str = "apna college";

    // for (int i = 0; i < str.length(); ++i) {
    //     cout<<str[i]<<'-';
    // }
    // cout<<endl;
    for (char ch: str) {
        cout<<ch<<",";
    }
    cout<<endl;
    return 0;
}
