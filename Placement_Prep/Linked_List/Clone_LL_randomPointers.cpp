class Solution
{
    private:
       void insertNew(Node* &head, Node* &tail, int data){
            
            Node* clone = new Node(data);
            
            if(head==NULL){
                head = clone;
                tail = clone;
            }
            else{
                tail->next = clone;
                tail = clone;
            }
        }
        
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        
        Node* temp = head;
        Node* tail = head;
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        while(temp!=NULL){
            insertNew(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        map<Node*, Node*> orginalToClone;
        
        Node* tempClone = cloneHead;
        temp = head;
        
        //created a mapping of original and the cloned list, w/o random pointers   
        while(temp!= NULL && tempClone!=NULL){
            orginalToClone[temp] = tempClone;
            temp = temp->next;
            tempClone = tempClone->next;
        }
        
        tempClone = cloneHead;
        temp = head;
        
        while(tempClone != NULL){
            tempClone->arb = orginalToClone[temp->arb];
            tempClone = tempClone->next;
            temp = temp->next;
        }
        
        return cloneHead;
    }
