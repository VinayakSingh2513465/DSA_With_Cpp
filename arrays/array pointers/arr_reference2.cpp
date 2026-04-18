#include<iostream>
using namespace std;

void printArr(int arr[],int n) {
    cout<<sizeof(arr)<<endl;// 8 = size of int pointer
    //int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; ++i) {
         cout<<arr[i]<<endl;
    }
     cout<<endl;
}

int main() {

    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr,n);
    return 0;
}
