#include <bits/stdc++.h> 
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

bool detectCycle(Node *head)
{
	Node* fast = head;
    Node* slow = head;
    bool loop_flag = false;
    
    if(head==NULL){
        return loop_flag;
    }
    if(head->next==head){
        return true;
    }
    if(head->next==NULL){
        return false;
    }
    
    while(fast!=NULL && slow!=NULL){
         
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
         if(fast == slow){
            loop_flag = true;
            break;
        }
    }
    return loop_flag;
}
