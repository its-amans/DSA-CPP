#include<iostream>
using namespace std;


void arrayInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int calculate(int arr[],int n){
    int max=INT16_MIN;
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]>max){
            max=arr[i];
        }
        if(arr[i]%2!=0 && arr[i]<min){
            min=arr[i];
        }
    }
    if(max==INT16_MIN){
        max=0;
    }
    if(min==INT16_MAX){
        min=0;
    }

    cout<<"Maximum Even :"<<max;
    cout<<min;
    return max-min;
}

int main(){
    int arr[10];
    arrayInput(arr,10);
    cout<<calculate(arr,10);
}

// Takeaways:
// 1. #include<climits> is used to use INT_MAX and INT_MIN.
// 2. array is always used as call by reference in function calls.
// 3. Linear data structure store elements sequentially , and each element is connected to its next and /or previous element.Array ,Linkedlist, Stack ,Queue.
// 4. They do not store in sequential manner. Tree ,Graph, Hahtable.

//Boundary Condition when the all entries are even or odd.





//Class Code 

// #include <iostream>
// #include <climits>
// using namespace std;
// #define SIZE 100
// void input(int A[],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         cout<<"\nEnter Elelemt: ";
//         cin>>A[i];
//     }

// }

// int difference(int B[],int n)
// {
//     int max_even=INT_MIN;
//     int min_odd=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if (B[i]%2==0 && B[i]>max_even)
//             max_even=B[i];
//         if (B[i]%2!=0 && B[i]<min_odd)
//             min_odd=B[i];
//     }
//     cout<<"Max Even :"<<max_even<<endl;
//     cout<<"Min Odd  :"<<min_odd<<endl;

//     int diff;
//     diff=max_even-min_odd;
//     return diff;
// }

// void display(int A[],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         cout<<"Elemet: "<<A[i]<<endl;
//     }

// }
// int main()
// {
//     int A[SIZE],n;
//     cout<<"ENter size max 10:";
//     cin>>n;
//     input(A,n);
//     display(A,n);
//     int diff=difference(A,n);
//     cout<<"Diff="<<diff;
//     return 0;
// }