#include <algorithm>
#include<iostream>

using namespace std;

void print(int arr[] , int n) {
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    // This is just for ascending order ......
    //sort(arr,arr+8);

    // this is second method with a third parameter...
    sort(arr,arr+8 , greater<int>());
    print(arr,8);
    return 0;
}
