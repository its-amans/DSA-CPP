#include<vector>
#include<iostream>
using namespace std;

void input(vector<int>& arr, int val){
    arr.push_back(val);
}
void display(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr;
    int val = 0;
    
    while(true){
        if(INT32_MIN<=val && val>=INT32_MAX){
            cout << "Enter a number : ";
            cin >> val;
        }
        else{
            break;
        }
        input(arr, val);
    }
    display(arr);
}