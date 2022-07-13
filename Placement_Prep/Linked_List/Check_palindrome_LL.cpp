//Code submitted on LeetCode
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL){
            return true;
        }
        
        ListNode* curr = head;
        vector<int> vec;
        
        while(curr != NULL){
            vec.push_back(curr->val);
            curr = curr->next;
        }
        
        int start = 0;
        int end = vec.size() - 1;
        
        while(start <= end)
        {
            if(vec[start] == vec[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};
// Time Complexity=> O(N); Space Complexity => O(N)
