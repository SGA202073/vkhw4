int CountNodes(TreeNode* root)
{
    if (root == nullptr)
        return 0;
    return 1 + CountNodes(root->left) + CountNodes(root->right);
}
void DepthSearch(TreeNode* root, int* data, int& index)
{
    if (root == nullptr)
        return;
    DepthSearch(root->left, data, index);
    data[index++] = root->value;
    DepthSearch(root->right, data, index);
}
bool IsSymmetricDFS(TreeNode* root)
{
    if (root == nullptr)
        return true;       
    int n = CountNodes(root);
    int* data = new int[n];
    int count = 0;
    DepthSearch(root, data, count);
    int j = count - 1;
    for (int i = 0; i < count / 2; i++)
    {
        if (data[i] != data[j])
        {
            delete[] data;
            return false;
        }
        j--;
    }
    delete[] data;
    return true;
}
/* используется обход в глубину, мы сравниваем пары элементов спротивоположных
концов массива, при таком обходе зеркальные поддеревья выдают одинаковые значения в обратном порядке*/