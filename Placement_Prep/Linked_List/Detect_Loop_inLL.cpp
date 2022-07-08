//Solved This question on GFG; Question Link:- https://practice.geeksforgeeks.org/problems/detect-loop-in-Linked-list/


/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        
        map<Node*, bool> visited;
        
        Node* temp = head;
        bool visit_flag = false;
      
      // for every node as the key, when we visit it we store it's value as TRUE; indicating that we have now visited that node
        while(temp != NULL){
          
          //Check if the node has been visited beforehand, and if so then we have detected the LOOP.
            if(visited[temp] == true){
                visit_flag = true;
                break;
              //return visit_flag;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        
      //If we haven't detcted a loop, then this flag will be same as initial i.e. FALSE
        return visit_flag;
    }
};
