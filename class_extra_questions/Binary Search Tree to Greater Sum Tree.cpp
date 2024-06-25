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
void get(TreeNode* root,vector<int>&hash,vector<int>pre){
        if(root==nullptr) return;
        int k=upper_bound(hash.begin(),hash.end(),root->val)-hash.begin();
        if(k!=hash.size()) root->val=pre[k-1];
        get(root->left,hash,pre);
        get(root->right,hash,pre);
    }
    void find(TreeNode* root,vector<int>&hash){
        if(root==nullptr) return;
        hash.push_back(root->val);
        find(root->left,hash);
        find(root->right,hash);
    }
    TreeNode* bstToGst(TreeNode* root) {
       vector<int>hash;
       find(root,hash); 
       for(auto it:hash) cout<<it<<" ";
       sort(hash.begin(),hash.end());
       vector<int>pre(hash.size(),0);
       pre[hash.size()-1]=hash[hash.size()-1];
       for(int i=hash.size()-2;i>=0;i--) pre[i]=hash[i]+pre[i+1];
       cout<<endl;
       for(auto it:hash) cout<<it<<" ";
       cout<<endl;
       for(auto it:pre) cout<<it<<" ";
       get(root,hash,pre);
       return root;
    }
};