struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value, TreeNode* left = nullptr, TreeNode* right = nullptr) : value(value), left(left), right(right) { }
    ~TreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};
TreeNode* buildTree(int* arr, int len, int i = 0)
{
    if (i >= len)
        return nullptr;
    TreeNode* root = new TreeNode(arr[i]);
    root->left = buildTree(arr, len, 2 * i + 1);
    root->right = buildTree(arr, len, 2 * i + 2);
    return root;
}
/*для узлов используется TreeNode, связь родитель потомок  вычисляется по идексам, то есть для текущего узла i его левыфй потомок
находится под индексом 2*i+1, а правый под 2*i+2 */