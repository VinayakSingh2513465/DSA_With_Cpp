// brute force approach

#include<iostream>

using namespace std;

void maxSubarraySum1(int *arr , int n) {
    int maxsum=INT_MIN;
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            int currSum = 0;
            for (int i = start; i <= end; ++i) {
                currSum += arr[i];
            }
            cout<<currSum<<",";
            maxsum = max(maxsum,currSum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum = "<<maxsum << endl;
}

int main() {
    int arr[6]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum1(arr,n);
    return 0;
}
