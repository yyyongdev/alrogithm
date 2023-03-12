vector<int> numbers({5, 1, 7, 3, 4});
int size = (int)numbers.size();

for (int i = 0; i < size - 1; i++)
{
    int idxMin = i;

    for (int j = i + 1 ; j < size; j++)
    {
        if (numbers[j] < numbers[idxMin])
        {
            idxMin = j;
        }
    }
    int temp = numbers[i];
    numbers[i] = numbers[idxMin];
    numbers[idxMin] = temp;
}