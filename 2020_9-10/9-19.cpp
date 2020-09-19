#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        return sumOfLeftLeaves(root->left) 
            + sumOfLeftLeaves(root->right) 
            + (root->left && !root->left->left && !root->left->right ? root->left->val : 0);
    }
};