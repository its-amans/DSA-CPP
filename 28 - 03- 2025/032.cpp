/*
Program No - 32
Topic      - Function Overloading
Program    - FO
Date       - 28.03.2025
Branch     - CSE-A (338)
Session No.- 08
Author     - Vivek Agrawal
*/

#include<iostream>
using namespace std;
#include <typeinfo>
#define SIZE 10

void display(int x, float y)
{
    cout<<"void display(int x, float y)"<<endl;
}

void display( float y, int x)
{
    cout<<"void display( float y, int x)";
}

int main()
{
    display(2,5.5f);
    display(5.5f,2);
}
