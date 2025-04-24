// Write a Program for First In Last Out (FILO) using array.                     FILO-STACK
// Write a Program for First In Last Out (FILO) using STL array.
// Write a Program for First In Last Out (FILO) using vector.
// Write a Program for First In Last Out (FILO) using STL adapter container.

#include<iostream>
using namespace std;
int size=0;
const int capacity=2;

void insert(int arr[],int data){
    if(size>=capacity){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        arr[size]=data;
        size++;   
    }
}

void del(int arr[]){
    if(size<=0){
        cout<<"Stack Underflow"<<endl;
    }
    size--;
}

void display(int arr[]){
    if(size<=0){
        cout<<"Stack Underflow";
    }
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[capacity];
    int data;
    char ch;
    while(true){
        cout<<"Enter 'a' to push into stack"<<endl;
        cout<<"Enter 'b' to pop into stack"<<endl;
        cout<<"Enter 'c' to display into stack"<<endl;
        cout<<"Enter 'd' to exit"<<endl;
        cin>>ch;
        if(ch=='a'){
            cout<<"Enter Data to push"<<endl;
            cin>>data;
            insert(arr,data);
        }
        else if(ch=='b'){
            del(arr);
        }
        else if(ch=='c'){
            display(arr);
        }
        else if (ch=='d'){
            break;
        }
    }
}