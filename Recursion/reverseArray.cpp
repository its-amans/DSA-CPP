#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){

    int s=0;
    int e=n-1;

    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
    
}
int main(){
    int arr[]={2,3,4,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    reverseArray(arr,n);
    cout<<endl<<"After"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}