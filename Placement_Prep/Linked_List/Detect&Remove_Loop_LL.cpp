/*************************************************
    
    class Node {
        public :
        int data;
        Node *next;
        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };
*************************************************/
Node *detectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return NULL;
    }
//     if(head->next=head){
//         return head;
//     }
    
    Node* fast = head;
    Node* slow = head;
    
    while(fast!=NULL && slow!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow -> next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node *findFirstNode(Node* head){
    
    Node* intersection = detectLoop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    
    return slow;
}

Node *removeLoop(Node *head)
{
    if(head == NULL){
        return NULL;
    }
    Node* startOfLoop = findFirstNode(head);
    if(startOfLoop == NULL){
        return head;
    }
    Node* temp = startOfLoop;
    
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    
    temp->next = NULL;
    return head;
}
