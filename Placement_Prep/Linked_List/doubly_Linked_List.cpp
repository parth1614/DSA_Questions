#include<bits/stdc++.h>
using namespace std;

class Node{
  
  public:
  int data;
  Node* prev;
  Node* next;
  
  //constructor
  Node(int d){
      this -> data = d;
      this -> prev = NULL;
      this -> next = NULL;
  }
    
};

int getLen(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head, int d){
   if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    
   else{
        Node* temp = new Node(d);
    
        temp -> next = head;
        head -> prev = temp;
        head = temp;
   }
}

void insertAtTail(Node* &tail, int d){
    if(tail == NULL){
       Node* temp = new Node(d);
       tail = temp;
   }
   else{
        Node* temp = new Node(d);
    
        tail->next = temp;
        temp -> prev = tail;
        tail = temp;
   }
}

void insertAtPosition(Node* &head,Node* &tail, int pos, int d){
    
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp -> next;
        count++;
    }
    
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }
  
  Node* insertionNode = new Node(d);
  
  insertionNode -> next = temp -> next;
  insertionNode -> prev = temp;
  temp -> next -> prev = insertionNode;
  temp -> next = insertionNode;
    
}

void print(Node* &head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<"Length of Linked List: "<<getLen(head)<<endl;
}

int main(){
    
    //Node* newNode = new Node(10);
    Node* head = newNode;
    Node* tail = newNode;
    
}
