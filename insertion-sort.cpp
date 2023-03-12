vector<int> numbers({3, 1, 7, 4, 6});
int size = (int)numbers.size();

for (int i = 1; i < size; i++)
{
    int index = i;
    while (index > 0 && numbers[index-1] > numbers[index])
    {
        int temp = numbers[index];
        numbers[index] = numbers[index - 1];
        numbers[index - 1] = temp;
        index--;
    }
}