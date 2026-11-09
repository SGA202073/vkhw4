int MinDepth(TreeNode* root)
{
    if (root == nullptr)
        return 0;
        
    if (root->left == nullptr && root->right == nullptr)
        return 1;
        
    if (root->left != nullptr && root->right != nullptr)
    {
        int leftDepth = MinDepth(root->left);
        int rightDepth = MinDepth(root->right);
        return 1 + (leftDepth < rightDepth ? leftDepth : rightDepth);
    }
    
    if (root->left != nullptr)
        return 1 + MinDepth(root->left);
        
    return 1 + MinDepth(root->right);
}
/*поиск в ширину обходит дерево по уровням, поэтому первый
встреченный лист будет на минимальной глубине
( в задании дается выбор по написанию кода, но пояснение только к другому варианту требуется...)*/