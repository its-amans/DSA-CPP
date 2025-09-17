#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void sort2(vector<int> &arr){
    int n=arr.size();
    int max=INT32_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    sort(arr.begin(),arr.end());
    vector<int> arr2(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());
    reverse(arr2.begin(),arr2.end());

    for(int i=0;i<2*n-1;i++){
        if(arr[i]<=max){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr2[i-n+1]<<" ";
        }
    }
}

int main(){
    vector<int> arr={2,0,8,4,23,6,3,78};
    sort2(arr);
}