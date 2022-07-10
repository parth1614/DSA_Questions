/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
#include<bits/stdc++.h>
using namespace std;
Node *removeDuplicates(Node *head)
{
    // Write your code here
    Node* curr = head;
    map<int,bool> visited;
    if(head == NULL){
        return NULL;
    }
    
    while( curr != NULL){
        if((curr->next!=NULL) && visited[curr->data] == true){
            Node* next_next = curr->next;
            Node* prev = curr;
         
            curr = next_next;
          //  prev->next = NULL;
            delete prev;
        }
           else{
                visited[curr->data] = true;
               curr = curr->next;
           }
         
    }
    
    return head;
}
