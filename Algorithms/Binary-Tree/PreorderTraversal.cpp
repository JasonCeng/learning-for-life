/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//recursive
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preTraversal(root, v);
        return v;
    }
    void preTraversal(TreeNode* root, vector<int>& v) {
      if(!root) return;
      v.push_back(root->val);
      preTraversal(root->left, v);
      preTraversal(root->right, v);
    }
};

//iterate，use stack to imitate recursive
class Solution {
public:
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int> v;
    if(!root) return v;
    TreeNode* temp = root;
    stack<TreeNode*> s;
    s.push(root);
    while(!s.empty()) {
      temp = s.top();
      s.pop();
      v.push_back(temp->val);
      if(temp->left) s.push(temp->left);
      if(temp->right) s.push(temp->right);
    }
    return v;
  }
}