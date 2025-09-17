#include<iostream>
using namespace std;

int squareRoot(int n){
    int s=0;
    int e=n;

    int mid=s+(e-s)/2;
    while(s<e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"The Square Root is :"<<squareRoot(n);
}