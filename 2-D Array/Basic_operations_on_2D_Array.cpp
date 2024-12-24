#include<iostream>
using namespace std;

int main(){
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; 
    int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; 
    int sum[3][4], sub[3][4], mul[3][4];

    // Addition of two 2-D array :
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            sum[row][col]=arr1[row][col]+arr2[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<sum[row][col]<<" ";
        }
    }
    cout<<endl;

    // Subtraction of two 2-D array :
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            sub[row][col]=arr1[row][col]-arr2[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<sub[row][col]<<" ";
        }
    }
    cout<<endl;

    // Multiplication of two 2-D array :
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            mul[row][col]=arr1[row][col]*arr2[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<mul[row][col]<<" ";
        }
    }

    
}