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
  
  //destructor to delete the node and free the memory
  ~Node(){
      if(this -> next != NULL){
          delete next;
          this->next = NULL;
      }
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

void insertAtHead(Node* &head, Node* &tail, int d){
   if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    
   else{
        Node* temp = new Node(d);
    
        temp -> next = head;
        head -> prev = temp;
        head = temp;
   }
}

void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail == NULL){
       Node* temp = new Node(d);
       tail = temp;
       head = temp;
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
        insertAtHead(head,tail,d);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp -> next;
        count++;
    }
    
    if(temp -> next == NULL){
        insertAtTail(tail,head,d);
        return;
    }
  
  Node* insertionNode = new Node(d);
  
  insertionNode -> next = temp -> next;
  insertionNode -> prev = temp;
  temp -> next -> prev = insertionNode;
  temp -> next = insertionNode;
    
}

void deleteNode(Node* &head, int pos){
    
    if(pos == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    
    Node* curr = head;
    Node* previous = NULL;
    int count = 1;
    while(count < pos){
        previous = curr;
        curr = curr -> next;
        count++;
    }
    
    previous -> next = curr -> next;
    curr -> next -> prev = previous;
    curr -> next = NULL;
    curr -> prev = NULL;
    delete curr;
    
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
    Node* head = NULL;
    Node* tail = NULL;
    
}
