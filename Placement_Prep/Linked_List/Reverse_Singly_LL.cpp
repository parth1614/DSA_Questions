//Code submitted at Coding Ninjas Platform; The Question Link: https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list

#include <bits/stdc++.h> 
using namespace std;
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    //If either the LL is empty or LL is of size 1
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *forward = NULL;
    
    while(curr != NULL){
        forward = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    
    return prev; // because at the end, prev pointer would point at the last node that is now the first node and it is head position now
}
