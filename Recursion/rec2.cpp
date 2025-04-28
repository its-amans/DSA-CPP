//Write a program that will return counting using recursion
#include<iostream>
using namespace std;

void returnCount(int s,int e){
    if(s==e+1){
        return ;
    }
    cout<<s<<endl;
    returnCount(s+1,e);
}

int main(){
    int s=1;
    int e=5;
    returnCount(s,e);
}