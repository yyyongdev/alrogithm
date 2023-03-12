#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

const int NODE_COUNT = 9;

// 인접 행렬
int graph[NODE_COUNT][NODE_COUNT] = {
    { 0, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 1, 1 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0 }
};
bool added[9] = { false, };

void BFS(int start)
{
    queue<int> q;
    added[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int visit = q.front();
        cout << setw(2) << visit;
        q.pop();

        for (int node = 0; node < NODE_COUNT; node++)
        {
            int adjacent = graph[visit][node];
            if (adjacent == 1 && !added[node])
            {
                added[node] = true;
                q.push(node);
            }
        }
    }
}

int main()
{
    BFS(0);

    return 0;
}