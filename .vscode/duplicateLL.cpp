/*Remove duplicate*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data; 
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* removeDuplicateLL(Node* head) {
    if (head == nullptr) return nullptr;

    set<int> st;
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if (st.find(current->data) != st.end()) {
        
            prev->next = current->next;
            delete current;
            current = prev->next;
        } else {
        
            st.insert(current->data);
            prev = current;
            current = current->next;
        }
    }

    return head;
}


void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    cout << "Previous List: ";
    printLL(head);
    cout<<"After removing dublicate element ";

    head = removeDuplicateLL(head);

    
    printLL(head);

    return 0;
}