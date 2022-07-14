// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
            struct Node* reverse(struct Node* &head){
                struct Node* temp = head;
                struct Node* prev = NULL;
                struct Node* forw = NULL;
                
                while(temp != NULL){
                    forw = temp->next;
                    temp->next = prev;
                    prev = temp;
                    temp = forw;
                }
                
                return prev;
            }
            
            void insert(struct Node* &head, struct Node* &tail, int value){
                
                struct Node* temp = new Node(value);
                
                if(head==NULL){
                    head = temp;
                    tail = temp;
                }
                else{
                    tail->next = temp;
                    tail = temp;
                }
            }
            
            struct Node* add(struct Node* &head1, struct Node* &head2){
                
                int carry = 0;
                int digit;
                int sum = 0;
                
                struct Node* curr1 = head1;
                struct Node* curr2 = head2;
                
                struct Node* ansHead = NULL;
                struct Node* ansTail = NULL;
                
                while(curr1 != NULL && curr2 != NULL){
                    
                    sum = carry + curr1->data + curr2->data;
                    
                    digit = sum%10;
                    
                    insert(ansHead,ansTail,digit);
                    carry = sum/10;
                    
                    curr1 = curr1->next;
                    curr2 = curr2->next;
                }
                
                
                    while(curr1 != NULL){
                    
                    sum = carry + curr1->data;
                    
                    digit = sum%10;
                    
                    insert(ansHead,ansTail,digit);
                    carry = sum/10;
                    curr1 = curr1->next;
                }
                    
                
                
                
                    while(curr2 != NULL){
                    
                    sum = carry + curr2->data;
                    
                    digit = sum%10;
                    
                    insert(ansHead,ansTail,digit);
                    carry = sum/10;
                   curr2 = curr2->next;
                }
                    
                
                
                
                    while(carry!=0){
                        sum = carry;
                        digit = sum%10;
                    insert(ansHead,ansTail,digit);
                    carry = sum/10;
                    //head2 = head2->next;
                    }
                
                    return ansHead;
            }
            
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node* head1 = reverse(first);
        struct Node* head2 = reverse(second);
        
        struct Node* ans = add(head1,head2);
        
        ans = reverse(ans);
        
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
