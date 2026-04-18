// Print the number of all 7’s that are in the 2d array.
// Example
// Input- int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
// Output- 2

#include<iostream>
using namespace std;

int main()
{
    int n = 2, m = 3;
    int arr[n][m] = { {4,7,8}, {8,8,7} };
    int c=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j]==7) {
                c++;
            }
        }
    }
    cout<<c<<" no of repeated times"<<endl;
}
