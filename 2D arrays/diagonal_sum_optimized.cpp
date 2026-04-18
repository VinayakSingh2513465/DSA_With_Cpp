#include<iostream>
using namespace std;

int diagonal_sum(int mat[][3],int n) {
    int sum = 0;

    // o(n)
    for (int i = 0; i < n; ++i) {
        sum += mat[i][i]; // pd
        if (i!=n-i-1) {
            sum += mat[i][n-i-1]; // sd
        }
    }
    cout << "sum = "<<sum<<endl;
    return sum;
}

int main() {
    int matrix [4][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int matrix1[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    diagonal_sum(matrix1 , 3);
}