#include <iostream>

using namespace std;

int main()
{
    int arr[]={3,3,3,1,1,2,2};
    int c =0 , freq=0;
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0 ;i < n;i++){
        int max = arr[i];
        for(int j = i+1;j<n;j++)
        {
            if(max==arr[j]){
                c=arr[i];
                freq++;
                continue;
            }
        }
    }
    if(n/2 < freq){
        cout<<c<<endl;
    }
}