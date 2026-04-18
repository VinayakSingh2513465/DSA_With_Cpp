// kadane's algo

#include<iostream>

using namespace std;

void maxSubarraySum1(int *arr , int n) {
    int maxsum=INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; ++i) {
        currSum += arr[i];
        maxsum = max(currSum,maxsum);
        if (currSum<0) {
            currSum = 0;
        }
    }
    cout<<"Maximum subarray sum = "<<maxsum << endl;
}

int main() {
    int arr[6]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum1(arr,n);
    return 0;
}
