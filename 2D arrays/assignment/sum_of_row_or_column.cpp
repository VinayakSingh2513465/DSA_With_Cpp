//  Print out the sum of the numbers in the second row of the “nums” array.
//  Example :
//  Input- int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
//  Output- 18

#include<iostream>

using namespace std;

int main() {
    int n =3, m=3 ,a , sum = 0;
    int nums[n][m] = { {1,4,9},
                     {11,4,3},
                      {2,2,3} };
    cout<<"enter row no "<<endl;
    cin>>a;
    int ith = (a-1);

    for (int j = 0; j < m; ++j) {
    sum += nums[ith][j];
    }
    cout<<sum<<endl;
    return 0;
}
