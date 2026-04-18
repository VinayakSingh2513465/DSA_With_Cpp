#include<iostream>
using namespace std;
int binSearch(int* , int , int);
int linSearch(int* , int , int);
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int key = 6;
    cout<<binSearch(arr,n,key)<<endl;
    cout<<linSearch(arr,n,key)<<endl;
}
int linSearch(int *arr, int n , int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
}

int binSearch(int *arr, int n , int key) {
    int st = 0 , end = n-1;

    while (st <= end) {
        int mid = (st + end)/2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            st = mid + 1;
        }
        else {
            end = mid -1;
        }
    }
}

