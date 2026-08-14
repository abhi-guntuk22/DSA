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
        vector<vector<int>> res; 
        queue<TreeNode*> q;      
        bool leftToright = true; // Flag: true = fill array left-to-right, false = right-to-left

        
        if (root == NULL) return res;

        q.push(root);

       
        while (!q.empty()) {
            int size = q.size();       
            vector<int> level(size);  

            
            for (int i = 0; i < size; i++) {
                
                TreeNode* node = q.front(); 
                q.pop();
          
                // Determine the correct storage index based on the current zigzag direction
                int idx = (leftToright) ? i : (size - 1 - i);
                level[idx] = node->val; 

              
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            leftToright = !leftToright; // Invert the flag to change direction for the upcoming level
            res.push_back(level);       // Save the completed level array into our final tracking matrix
        }
        return res; 
    }
};
