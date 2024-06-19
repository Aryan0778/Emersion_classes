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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>que;
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        que.push(root);
        while(!que.empty()){
            int s=que.size();
            vector<int>level;
            for(int i=0;i<s;i++){
            TreeNode* temp=que.front();
            que.pop();
            if(temp->left!=nullptr){
                que.push(temp->left);
                cout<<temp->left->val<<" ";
            }
            if(temp->right!=nullptr){
                que.push(temp->right);
                cout<<temp->right->val<<" ";
            }
            cout<<endl;
            level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};