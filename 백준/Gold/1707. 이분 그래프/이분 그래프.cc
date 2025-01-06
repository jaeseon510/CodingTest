#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

vector<int> vect[20001];
int visited[20001];
int V, E;

void DFS(int start)
{
    if (visited[start] == 0)
        visited[start] = 2;

    for (int i = 0; i < vect[start].size(); i++)
    {
        int idx = vect[start][i];
        if (visited[idx] == 0)
        {
            if (visited[start] == 2)
                visited[idx] = 3;
            else if (visited[start] == 3)
                visited[idx] = 2;
            DFS(idx);
        }
    }
}

int check()
{
    for (int i = 1; i <= V; i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            int idx = vect[i][j];
            if (visited[i] == visited[idx])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int T;
    int u, v;

    cin >> T;
    while (T--)
    {
        cin >> V >> E;
        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            vect[u].push_back(v);
            vect[v].push_back(u);
        }

        for (int i = 1; i <= V; i++)
        {
            if (visited[i] == 0)
                DFS(i);
        }

        if (check() == 0)
            cout << "NO\n";
        else
            cout << "YES\n";

        memset(visited, 0, sizeof(visited));
        memset(vect, 0, sizeof(vect));
    }
}