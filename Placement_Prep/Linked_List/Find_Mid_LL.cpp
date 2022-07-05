//Submitted at Coding Ninjas Platform; Problem Link:- https://www.codingninjas.com/codestudio/problems/middle-of-linked-list
#include <bits/stdc++.h> 
using namespace std;
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

Node *findMiddle(Node *head) {
    // Write your code here
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    Node* mid = head;
    int i = 0;
    int count_mid = (count/2);
   
    while(count_mid--){
        mid = mid->next;
    }
    
//     int d = mid
    return mid;
}

//Time Complexity => O(N); Space Complexity => O(1)
