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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode *p = q.front();
                q.pop();
                level.push_back(p->val);
                if(p->left != NULL){
                    q.push(p->left);
                }
                if(p->right != NULL){
                    q.push(p->right);
                }
            }
            result.push_back(level);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};