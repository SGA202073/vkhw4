long long MaxMinMultiplication(int* data, int count)
{
    if (count < 3)
        return -1;  
    int min_index = 1;
    for (int i = 0; 2 * i + 1 < count; i = 2 * i + 1)
        min_index = 2 * i + 1;
    int max_index = 2;
    for (int i = 0; 2 * i + 2 < count; i = 2 * i + 2)
        max_index = 2 * i + 2;
    return (long long)data[min_index] * data[max_index];
}
/*в BST минимальный элемент всегда в крайнем левом узле, максимльный -- в крайнем правом.
в массиве спуск влево идет по 2i+1, а вправо по 2i+2, мы проходим только по одной ветке, поэтому О(h) */