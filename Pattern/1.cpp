#include <iostream>
using namespace std;

void pat1(int n){
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            cout<<"@"<<" ";
        }
        cout<<endl;
    }
}
void pat2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"@";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pat3(int n){
    for(int i=0;i<n;i++){
        char ch='a';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void pat4(int n){
    for(int i=0;i<n;i++){
        char ch='a';
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<ch;
                ch++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pat5(int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(j%2==0){
                cout<<"0"<<" ";
            }
            else{
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
}
void pat6(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }
}
void altpat6(int n){
    bool b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b<<" ";
            b=!b;
        }
        cout<<endl;
    }
}
void pat7(int n){
    bool b=0;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<"@"<<" ";
        }
        cout<<endl;
    }
}
void pat8(int n){
    bool b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<"@ ";
            }
            else{
                cout<<" ";
            }
           
        }
        cout<<endl;
    }
}

void pat9(int n){
    bool  b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                cout<<"@ ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<< endl;

    }
}
int main(){
   int n;
   cout<<"Enter levels: ";
   cin>>n;
//    pat1(n);
//    pat2(n);
//    pat3(n);
//    pat4(n);
//    pat5(n);
    // pat6(n);
    // altpat6(n);
    // pat7(n);
    //pat8(n);
    pat9(n);
}