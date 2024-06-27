class Solution
{
public:
    vector<int> v;
    TreeNode *constructBST(vector<int> &nums, int left, int right)
    {
        if (left > right)
        {
            return nullptr;
        }

        int mid = left + (right - left) / 2;
        TreeNode *node = new TreeNode(nums[mid]);
        node->left = constructBST(nums, left, mid - 1);
        node->right = constructBST(nums, mid + 1, right);

        return node;
    }
    void solve(TreeNode *root)
    {
        if (root == nullptr)
            return;
        solve(root->left);
        v.push_back(root->val);
        solve(root->right);
    }
    TreeNode *balanceBST(TreeNode *root)
    {
        if (root == nullptr)
            return nullptr;
        solve(root);

        TreeNode *ans = constructBST(v, 0, v.size() - 1);
        return ans;
    }
};