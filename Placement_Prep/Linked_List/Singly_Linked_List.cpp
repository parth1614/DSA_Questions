#include<bits/stdc++.h>
using namespace std;

class Node{
  
  public:
  int data;
  Node* next;
  
  //Constructor to create a new Node
  Node(int data){
      this -> data = data;
      this -> next = NULL;
  }
  
  //Destructor to delete a Node
  ~Node(){
      
      //Freeing the memory
      if(this -> next != NULL){
          delete next;
          this -> next = NULL;
      }
  }
    
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head, int pos, int d){
    
    //Inserting at starting position i.e. 1
    if(pos == 1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    int count = 1; 
    
    while(count < pos - 1){
        temp = temp -> next;
        count++;
    }
    
    //Inserting at the last position
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}

void deleteNode(int pos, Node* &head, Node* &tail){
    
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count< pos){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        
        if(curr -> next == NULL){
            prev -> next = curr -> next;
            tail = prev;
            curr -> next = NULL;
        }
        else{
            prev -> next = curr -> next;
            curr -> next = NULL;
        }
        
      
        delete curr;
        
        
    }
    
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
