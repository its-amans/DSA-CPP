//Write a Program to merge two sorted arrays
#include<vector>
#include<iostream>
using namespace std;
void display(vector<int> ans){
    for(auto num : ans) {
        cout << num << " ";
    }
}

void mergeArray(vector<int> arr1,vector<int> arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> ans(n+m);
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            ans[k++]=arr1[i++];
        }
        else{
            ans[k++]=arr2[j++];
        }
    }
    while(i<n){
        ans[k++]=arr1[i++];
    }
    while(j<m){
        ans[k++]=arr2[j++];
    }
    display(ans);
}

int main(){
    vector<int> arr1={1,2,3,5,7};
    vector<int> arr2={7,8,9,10,12};
    mergeArray(arr1,arr2);
}
