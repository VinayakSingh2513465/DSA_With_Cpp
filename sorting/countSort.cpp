#include<iostream>

using namespace std;

void print(int arr[],int n) {
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<",";
    }
}

void countSort(int arr[],int n) {
    int freq[10000]; //range
    int minVal = INT_MAX , maxVal = INT_MIN;
    for (int i = 0; i < n; ++i) {
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }
    //1st step...
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }
    //2nd step
    for (int i = minVal,j=0; i <= maxVal; ++i) {
        while (freq[i]>0) {
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    countSort(arr,8);
}
