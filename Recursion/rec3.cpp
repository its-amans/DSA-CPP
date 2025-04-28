//Write a program that will return counting using recursion
#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 1;
    }
    return n+sum(n-1);
}

int main(){
    int n=5;
    cout<<sum(n);
}