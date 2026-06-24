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
        vector<vector<int>>res;
        if(root==nullptr)
        {
            return res;
        }
        
        queue<TreeNode*>pq;
        pq.push(root);
        while(!pq.empty())
        {
            int lvl = pq.size();
            vector<int>temp;
            while(lvl--)
            {
                TreeNode*t = pq.front();
                pq.pop();
                temp.push_back(t->val);

                if(t->left!=nullptr)
                {
                    pq.push(t->left);
                }
                 if(t->right!=nullptr)
                {
                    pq.push(t->right);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
