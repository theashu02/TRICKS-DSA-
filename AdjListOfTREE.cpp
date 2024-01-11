
void fillList(unordered_map<int, vector<int>> &adj, int p, TreeNode *pointer)
{
    if (pointer == nullptr)
        return;

    if (p != -1)
        adj[pointer->val].push_back(p);

    if (pointer->left)
        adj[pointer->val].push_back(pointer->left->val);

    if (pointer->right)
        adj[pointer->val].push_back(pointer->right->val);

    fillList(adj, pointer->val, pointer->left);
    fillList(adj, pointer->val, pointer->right);
}


{
    unordered_map<int, vector<int>> adj; // To make undirected adj list tree to graph
    fillList(adj, -1, root);  // adj list is ready to use 
}