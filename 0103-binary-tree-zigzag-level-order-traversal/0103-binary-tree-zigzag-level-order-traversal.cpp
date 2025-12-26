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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root == NULL){
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        int level = 1;
        while(!q.empty()){
            int s = q.size();
            vector<int>curr;
            for(int i = 0; i < s; i++){
                TreeNode*p = q.front();
                q.pop();
                curr.push_back(p->val);
                if(p->left != NULL){
                    q.push(p->left);
                }if(p->right != NULL){
                    q.push(p->right);
                }
            }
                if(level % 2 == 0){
                    reverse(curr.begin(),curr.end());
                }
                result.push_back(curr);
                level++;
        }
        return result;
    }
};