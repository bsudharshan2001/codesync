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
    void inorderTraversal(TreeNode* node, vector<int>& nodes) {
        if (!node) 
            return;
        inorderTraversal(node->left, nodes);
        nodes.push_back(node->val);
        inorderTraversal(node->right, nodes);
    }

    TreeNode* buildBalancedBST(const vector<int>& nodes, int start, int end) {
        if (start > end) 
            return nullptr;
        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(nodes[mid]);
        root->left = buildBalancedBST(nodes, start, mid - 1);
        root->right = buildBalancedBST(nodes, mid + 1, end);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> sortedNodes;
        inorderTraversal(root, sortedNodes);
        return buildBalancedBST(sortedNodes, 0, sortedNodes.size() - 1);
    }
};