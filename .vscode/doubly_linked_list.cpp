/*
Program No - 71
Topic      - Linked List Doubly
Program    - Insertion Start
Date       - 21.04.2025
Branch     - CSE (338)
Session No.- 16
Author     - Vivek Agrawal
*/

#include<iostream>
using namespace std;

/** Node class for doubly linked list */
class doubly_node {
public:
    int data;           // Stores the data value
    doubly_node* next;  // Pointer to next node
    doubly_node* prev;  // Pointer to previous node

    doubly_node(int data = 0) : data(data), next(nullptr), prev(nullptr) {}  // Constructor
};

/** Global pointers and length for doubly linked list */
doubly_node* d_first = nullptr;  // Head of the list
doubly_node* d_last = nullptr;   // Tail of the list
int d_length = 0;  

//--------------------------------------------------------------------------------------
// Purpose: Inserts a new node at the start of the doubly linked list
/*
Pseudocode:
1. Create a new node with data.
2. If list is empty:
   a. Set d_first and d_last to new_node.
3. Else:
   a. Link new_node's next to d_first.
   b. Link d_first's prev to new_node.
   c. Set d_first to new_node.
4. Increment d_length.
*/

void d_insert_at_start(int data) {
    doubly_node* new_node = new doubly_node(data);  // Create a new node with data
    if (d_first == nullptr) //FIRST ELEMENT IS GOING TO BE INSERTED
    {         // Check if list is empty
        d_first = new_node;           // Set d_first to new node
        d_last = new_node;             // Set d_last to new node
    } 
    else
     {
        new_node->next = d_first;     // Link new node to current d_first
        d_first->prev = new_node;     // Link d_first back to new node
        d_first = new_node;           // Update d_first to new node
    }
    d_length++;                       // Increase list length
    cout << "NODE INSERTED AT START with Data " << data << endl;
} 

void d_insert_at_end(int data) {
    doubly_node* new_node = new doubly_node(data);  // Create a new node with data
    if (d_first == nullptr) //FIRST ELEMENT IS GOING TO BE INSERTED
    {         
        d_first = new_node;           
        d_last = new_node; 
                  
    } 
    else
     {  
        d_last->next = new_node;  
        new_node->prev=d_last;     
        d_last = new_node;  
    }
    d_length++;                       // Increase list length
    cout << "NODE INSERTED AT START with Data " << data << endl;
} 

void display(){
    doubly_node* temp= d_first;

    while(temp!=NULL){
        cout<<temp->data<<"-------->";
        temp=temp->next;
    }
}
int main(){
    int data;

    while(true){
        cout<<"Enter Data or enter -1 to exit";
        cin>>data;

        if(data==-1){
            break;
        }
        d_insert_at_end(data);
    }

    display();
}
