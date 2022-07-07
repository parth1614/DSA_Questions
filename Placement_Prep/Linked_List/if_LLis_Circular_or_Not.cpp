/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    // Write your code here.
    
    //If the LL is NULL, then we consider it as a circular node. (Given in problem statement)
    if(head==NULL){
        return true;
    }
    
    Node* temp = head->next; //To check the basic of circular LL, we neet to know that temp==head.
                             // and if we initialize temp = head, then loop will stop at first iteration
    
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    
//     if(temp==NULL){
//         return false;
//     }
    if(temp == head){
        return true;
    }
    else{
        return false;
    }

}
