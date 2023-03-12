#include <iostream>
#include <stack>
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

void DFS(int start)
{
    stack<int> s;  
    added[start] = true;
    s.push(start);
    
    while (!s.empty())
    {
        int visit = s.top();
        cout << setw(2) << visit;
        s.pop();

        for (int node = 0; node < NODE_COUNT; node++)
        {
            int adjacent = graph[visit][node];
            if (adjacent == 1 && !added[node])
            {
                added[node] = true;
                s.push(node);
            }
        }
    }
}

int main()
{
    DFS(0);

    return 0;
}