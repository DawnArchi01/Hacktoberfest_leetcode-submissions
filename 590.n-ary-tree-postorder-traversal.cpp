/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    void easy(Node* root){
        if(!root) return;
        for(auto &k : root->children){
            easy(k);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        easy(root);
        return ans;
    }
};