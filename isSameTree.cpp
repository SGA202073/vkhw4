bool IsSameTree(TreeNode* a, TreeNode* b)
{
    if (a == nullptr && b == nullptr)
        return true;
    if (a == nullptr || b == nullptr)
        return false;
    if (a->value != b->value)
        return false;
    return IsSameTree(a->left, b->left) && IsSameTree(a->right, b->right);
}
/*деревья одинаковы, если оба узла пусты, или оба существуют, их значения равны, и левое/правое поддеревья рекурсивно
индентичны. если один узел пуст, а другой нет, или значения не совпадают, то деревья разные */