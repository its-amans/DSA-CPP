#include<iostream>
#include<vector>
using namespace std;

class node {
    public:
        int data;       // Stores the data value
        node *next;     // Pointer to the next node
    
        //node(int data = -1) : data(data), next(nullptr) {}  // Constructor with default values
        node(int input = -1)  //constructor
        {
            data=input;
            next=nullptr; //NULL
        }
};

node *first=nullptr;
node *last=nullptr;
int length=0;
vector<int> arr;

void insert_at_end(int data) {
    node* new_node = new node(data);  // Create a new node with data
    if (first == nullptr && last==nullptr) 
    {           // Check if list is empty
        first = new_node;             
        last = new_node;             
        cout << "FIRST NODE CREATED with Data " << data << endl;
    } else {
             
        last->next=new_node;
        last=new_node;
        cout << "NODE INSERTED AT end with Data " << data << endl;
    }
    length++;                         // Increase list length
}

void display(){
    node *temp=first;
    cout<<endl;
    while (temp != nullptr) {         
        cout << temp->data << "----->"; 
        temp = temp->next;            
    }
}

void reverseList(){
    node* temp=first;
    if (first == nullptr && last==nullptr) {
        cout<<"The list is empty";
    }
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    cout<<endl<<"Reversed lIst is: "<<endl;
    // for(int i=arr.size();i>0;i--){
    //     cout<<arr[i]<<" ";
    // }

    while(!arr.empty())
    {
        cout<<arr.back()<<" ";
        arr.pop_back();
    }
}

void removeDuplicates(){

}

int main()
{
	int data;
    while (true){
            cout<<"ENter Data";
            cin>>data;
            if(data==-1){
                break;
            }
            insert_at_end(data);
            cout<<"Press -1 to exit ";
    }
	
    display();
    reverseList();
}


