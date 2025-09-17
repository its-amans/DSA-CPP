//wap to that take pivot element 
#include<iostream>
using namespace std;

int parrot(int arr[],int s,int e){
    int pivot=arr[e];
    int i=s-1;
    for(int j=s;j<=e-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);

        }
    }
    swap(arr[i+1],arr[e]);
}

void quickSort(vector<int>& arr, int s, int e){
    

}

int main(){
    int arr[]={2,45,23,43,12,32};



}