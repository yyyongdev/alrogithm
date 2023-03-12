void QuickSort(vector<int>& numbers, int pivot, int end)
{
    if (pivot >= end)
    {
        return;
    }
    int left = pivot + 1;
    int right = end;

    while (left <= right)
    {
        while (left <= end && numbers[pivot] >= numbers[left])
        {
            left++;
        }
        while (right > pivot&& numbers[pivot] <= numbers[right])
        {
            right--;
        }
        if (left > right)
        {
            int temp = numbers[pivot];
            numbers[pivot] = numbers[right];
            numbers[right] = temp;
        }
        else
        {
            int temp = numbers[left];
            numbers[left] = numbers[right];
            numbers[right] = temp;
        }
    }
    QuickSort(numbers, pivot, right - 1);
    QuickSort(numbers, right + 1, end);
}

vector<int> numbers{5, 3, 2, 9, 1, 6, 8, 7};
    
QuickSort(numbers, 0, (int)numbers.size() - 1);