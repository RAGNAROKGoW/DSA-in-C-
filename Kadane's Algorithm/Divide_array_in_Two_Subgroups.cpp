#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr ={3,4,-2,5,8,20,-10,8};
    int prefix_sum=0, sum=0;
    for(int i=0; i<arr.size()-1; i++){
        prefix_sum=0, sum=0;
        for(int j=0; j<=i; j++){
            prefix_sum=prefix_sum+arr[j];
        }
        for(int k=i+1; k<=arr.size()-1; k++){
            sum=sum+arr[k];
        }
        if(sum==prefix_sum){
            cout<<"Array can be devided into two subarrays with equal sum at index : "<<i;
            return 0;
        }
    }
}