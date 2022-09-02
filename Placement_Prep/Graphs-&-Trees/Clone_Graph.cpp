/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    void dfs(vector<Node*> &vis, Node* clone, Node* node){
        vis[clone->val] = clone;
        
        for(auto nbr : node->neighbors){
            if(vis[nbr->val]==NULL){
                Node* newNode = new Node(nbr->val);
                (clone->neighbors).push_back(newNode);
                dfs(vis, newNode, nbr);
            }
            else{
                (clone->neighbors).push_back(vis[nbr->val]);
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        
        Node* clone = new Node(node->val);
        vector<Node*> vis(101,NULL);
        dfs(vis, clone, node);
        return clone;
    }
};
