#include<iostream>
#include<vector>
using namespace std;


int twoSum(vector<int> &arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"First Element is :"<<arr[i]<<endl;
                cout<<"Second Element is :"<<arr[j];
            }
        }
    }

}
int main(){
    vector<int> arr={2,5,6,8,10};
    int target=6;

    twoSum(arr,6);
}