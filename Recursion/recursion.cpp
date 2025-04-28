//Write a program that will return counting using recursion
#include<iostream>
using namespace std;

void returnCount(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    returnCount(n-1);
}

int main(){
    int n;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    returnCount(n);
}