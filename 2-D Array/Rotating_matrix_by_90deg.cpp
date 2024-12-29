#include<iostream>
using namespace std;

int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Transpose the matrix
    for(int i=0; i<3; i++){
        for(int j = i; j<3; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    // Reverse the rows
    for(int i=0; i<3; i++){
        for(int j=0; j<3/2; j++){
            swap(matrix[i][j], matrix[i][3-j-1]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}