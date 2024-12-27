#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int col=4;
    for(int row=0; row<3; row++){
        int start=0, end=col-1; // start and end index of each row
        while(start<end){
            swap(arr[row][start], arr[row][end]);
            start++;
            end--;
        }
    }
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
    }
}