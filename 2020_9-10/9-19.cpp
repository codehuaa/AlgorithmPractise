#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right) + (root->left && !root->left->left && !root->left->right ? root->left->val : 0);
    }
};