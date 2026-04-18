#include <iostream>
#include <climits>
using namespace std;

void trap(int *heights , int n) {
    int leftMax[20000] , rightMax[20000];
    leftMax[0]=INT_MIN;
    rightMax[n-1] = INT_MIN;


    for (int i = 1; i < n; ++i) {
        leftMax[i] = max(leftMax[i-1] , heights[i-1]);
    } // for left max part;

    for (int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1] , heights[i+1]);
    } // for right max part

    int watertrapped = 0;
    for (int i = 0; i < n; ++i) {
        int currWater = min(leftMax[i] , rightMax[i]) - heights[i];
        if (currWater>0) {
            watertrapped += currWater;
        }
    }
    cout<<"Water trapped = "<<watertrapped<<endl;
}

int main() {
    int heights [5] = {5,4,3,2,1};
    int n = sizeof(heights) / sizeof(int);
    trap(heights,n);
}
