#include<iostream>
using namespace std;

void findUnique(int a[],int n){
    int arr[100]={0};

    for(int i=0;i<n;i++){
        arr[a[i]]++;
    }
    for(int i=0;i<100;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a[]={1,2,3,10};
    int n=sizeof(a)/sizeof(a[0]);
    findUnique(a,n);
}