#include<bits/stdc++.h>
using namespace std;

class Node{
  
  public:
  int data;
  Node* next;
  
  Node(int data){
      this -> data = data;
      this -> next = NULL;
  }
    
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp -> data<<" "<<endl;
        //cout<<temp->next<<" ";
        temp = temp->next;
    }
        
}

int main(){
    
    Node* newNode = new Node(10);
    Node* head = newNode;
    Node* tail = newNode;
    //print(head);
    
    //cout<<newNode -> data <<endl;
    //cout<< newNode -> next <<endl;
    
    
    insertAtHead(head,12);
    print(head);
    
}
