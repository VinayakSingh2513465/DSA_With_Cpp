#include<iostream>
using namespace std;

int diagonal_sum(int mat[][3],int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i==j) {
                sum += mat[i][j];
            }
            else if (j== n-i-1) {
                sum += mat[i][j];
            }
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
