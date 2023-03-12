vector<int> numbers = {4, 2, 3, 1, 2, 2, 5, 3, 5, 1};
int min = 1; // 가장 작은 값(필요 조건)
int max = 5; // 가장 큰 값(필요 조건)
int countSize = max - min + 1;

vector<int> countArray(countSize);
    
for (int i = 0; i < numbers.size(); i++)
{
    int index = numbers[i] - min;
    countArray[index]++;
}