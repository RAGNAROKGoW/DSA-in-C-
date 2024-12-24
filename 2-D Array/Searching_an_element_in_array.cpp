#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}, n;
    cout<<"Enter the element to search : "; cin>>n;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==n){
                cout<<"Element found at index ("<<row<<", "<<col<<")";
                return 0;
            }
        }
    }
    cout<<"Element not found";
}