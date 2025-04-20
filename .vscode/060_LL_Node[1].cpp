
/*
Program No - 60
Topic      - Linked List
Program    - Node Creation
Date       - 07.04.2025
Branch     - CSE (338)
Session No.- 12
Author     - Vivek Agrawal
*/

#include<iostream>
using namespace std;

/** Node class for singly linked list */
class node {
public:
    int data;       // Stores the data value
    node *next;     // Pointer to the next node

    //node(int data = -1) : data(data), next(nullptr) {}  
    // Constructor with default values
    node(int input = -1)  //constructor default = -1
    {
    	data=input;
    	next=nullptr; //NULL
    }
};

int main()
{
    
}
