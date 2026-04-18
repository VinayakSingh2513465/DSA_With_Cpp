#include <iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr , int target) {
    int st = 0 , end = arr.size()-1;
    int currSum =0 ;
    vector<int> ans;
    while (st < end) {
        currSum = arr[st] + arr[end];
        if (currSum==target) {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if (currSum > target) {
            end--;
        }
        else {
            st++;
        }
    }
    return ans;
}

int main() {
    int size = 0;
    cin>>size;
    vector<int>vec(size);
    for(int i = 0 ;i<size;i++){
        cin >> vec[i];
    }
    int target =0;
    cin >> target;
    vector<int> ans = pairSum(vec,target);
    cout<<ans[0] << ","<<ans[1]<<endl;
    return 0;
}