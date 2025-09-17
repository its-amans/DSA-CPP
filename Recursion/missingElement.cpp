#include <iostream>
using namespace std;

void missing(int arr[],int n,int d) {
    for (int i=0;i<n-1;i++) {
        if (arr[i+1]-arr[i]!= d) {
            cout <<"Missing element:"<<arr[i]+d<< endl;
            return;
        }
    }
    cout<<"No missing element found."<< endl;
}

int main() {
    int arr[]={1, 3, 7, 9};
    int d=arr[1]-arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);

    missing(arr, n, d);
    return 0;
}