vector<int> numbers = {3, 2, 7, 4, 1, 8, 6};
int size = (int)numbers.size();

// 최대 힙
for (int i = 1; i < size; i++)
{
    int root, c = i;
    do
    {
        root = (c - 1) / 2;

        if (numbers[root] < numbers[c])
        {
            int temp = numbers[root];
            numbers[root] = numbers[c];
            numbers[c] = temp;
        }
        c = root;
    } while (c != 0);
}
// 최대값 마지막값 서로 바꾸고 다시 최대 힙
for (int i = 1; i < size; i++)
{
    int max = size - i;
    int temp = numbers[0];
    numbers[0] = numbers[max];
    numbers[max] = temp;

    int c, root = 0;
    do
    {
        c = root * 2 + 1;

        if (c + 1 < max && numbers[c] < numbers[c + 1])
        {
            c++;
        }
        if (c < max && numbers[root] < numbers[c])
        {
            int temp = numbers[root];
            numbers[root] = numbers[c];
            numbers[c] = temp;
        }
        root = c;
    } while (root <= max);
}