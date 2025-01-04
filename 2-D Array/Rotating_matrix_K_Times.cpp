#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9}, K;

    cout<<"Enter the number of times you want to rotate the matrix : ";cin>>K;

    for(int i=0; i<K; i++){
        for(int row=0; row<3; row++){
            for(int col=row; col<3; col++){
                swap(matrix[row][col], matrix[col][row]);
            }
        }

        for(int row=0; row<3/2; row++){
            for(int col=0; col<3; col++){
                swap(matrix[col][row], matrix[col][2-row]);
            }
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }
}