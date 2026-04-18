#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char arr[5] = {'c','o','d','e','\0'};
    cout<<arr<<endl;
    //"apna college" string literal
    //"hello world" string literal
    // no need to terminate with a null character "\0";
    char work[] = "code";

    cout<<work<<endl;

    // types of allocation
    // 1. char work[] = "code";
    // 2. char work[4] = "code";
    // 3. char arr[] = {'c','o','d','e','\0'};
    // 4. char work[50] = {'c','o','d','e','\0'};
    char work[50] = {'h','e','l','l','o','\0'};
    cout << strlen(work) << endl;
    return 0;
}
