/****************************************************************
    Following is the Linked List node structure

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


Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* curr = head;
    Node* nextNode = NULL;
    Node* prev = NULL;
    
    int count = 0;
    
    // Reverse the first K elements of the Linked List
    
    while(curr != NULL && count < k){
        nextNode = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        count++;
    }
    
    // Applying Recursion to reverse the next k elements
    
    if(nextNode!= NULL){
        head->next = kReverse(nextNode,k);
    }
    
    return prev;
}

//Time Complexity => O(n) because we visit each node once;
//Space Complexity => O(n) because we have a recursive stackof N/k
