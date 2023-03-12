void Merge(vector<int>& numbers, vector<int>& temp, int start, int mid, int end)
{
    for (int i = start; i <= end; i++)
    {
        temp[i] = numbers[i];
    }
    int left = start;
    int right = mid + 1;
    int index = start;

    while (left <= mid && right <= end)
    {
        if (temp[left] <= temp[right])
        {
            numbers[index] = temp[left];
            left++;
        }
        else
        {
            numbers[index] = temp[right];
            right++;
        }
        index++;
    }
    for (int i = left; i <= mid; i++)
    {
        numbers[index] = temp[i];
        index++;
    }
}

void MergeSortRecursive(vector<int>& numbers, vector<int>& temp, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    MergeSortRecursive(numbers, temp, start, mid);
    MergeSortRecursive(numbers, temp, mid + 1, end);
    Merge(numbers, temp, start, mid, end);
}

vector<int> numbers = {2, 1, 7, 4, 6, 9, 5, 3};
int size = (int)numbers.size();
vector<int> temp(size);

MergeSortRecursive(numbers, temp, 0, size - 1);