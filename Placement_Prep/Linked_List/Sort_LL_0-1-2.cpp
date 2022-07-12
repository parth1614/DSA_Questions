/********************************
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

********************************/

Node* sortList(Node *head)
{
    // Write your code here.
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    
    Node* temp = head;
    
    while(temp!=NULL){
        if(temp->data == 0){
            count0++;
        }
        else if(temp->data == 1){
            count1++;
        }
        else{
            count2++;
        }
        
        temp = temp->next;
    }
    
    temp = head;
    
    while(temp!=NULL){
        if(count0 != 0){
            temp->data = 0;
            count0--;
        }
        else if(count1 != 0){
            temp->data = 1;
            count1--;
        }
        else if(count2 != 0){
            temp->data = 2;
            count2--;
        }
        
        temp = temp->next;
    }
    
    return head;
}
// Time Complexity=> O(N); Space Complexity=> O(1)

// x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-xx-x-x-x-x-x-x-x-xx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-xx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-xx-x-x //\


// Second Approach: If You are not allowed to change the data values of the nodes, and can only work with the pointers;;

/********************************
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

********************************/

void insertAtTail(Node* &tail, Node* curr){
    
    tail->next = curr;
    tail = curr;
    
}

Node* sortList(Node *head)
{
     if(head==NULL){
         return NULL;
     }
    
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // Creating the 3 seperate Linked Lists for 0s, 1s, and 2s
    while(curr != NULL){
        if(curr->data == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(curr->data == 1){
            insertAtTail(oneTail,curr);
        }
        else if(curr->data == 2){
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }
    
    //Merging the 3 linked Lists
    
    // if the linked list of 1s are present
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    
    twoTail->next = NULL;
    
    //Setting up the head to the first node, i.e. first node with data 0;
    head = zeroHead->next;
    
    //Deleting the dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
  
    return head;
}
// Time Complexity=> o(N); Space Complexity=> O(1)
