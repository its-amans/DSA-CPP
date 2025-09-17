#include<iostream>
using namespace std;

void display(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int arr[],int n){
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        display(arr,n);
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    int arr[]={2,8,3,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
}