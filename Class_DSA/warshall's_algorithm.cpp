#include <bits/stdc++.h>
using namespace std;
 
#define INF 9999999
 
const int a = 100;
 
int dist[a][a], graph[a][a], v;
 
void floydWarshall()
{
    int i, j, k;
 
    for (i = 0; i < v; i++)
        for (j = 0; j < v; j++)
            dist[i][j] = graph[i][j];
 
    for (k = 0; k < v; k++)
    {
        for (i = 0; i < v; i++)
        {
            for (j = 0; j < v; j++)
            {
                if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != INF && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}
 
int main()
{
    cout << "\nSHORTEST PATH USING WARSHALL'S ALGORITHM";
    cout << "\n\nEnter the number of vertices in graph: ";
    cin >> v;
    cout << "\nEnter the adjacency matrix of the graph (Enter -1 if edge doesn't exist):\n";
 
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == -1)
                graph[i][j] = INF;
        }
 
    floydWarshall();
 
    cout << "\nShortest Distance Matrix using Warshall's Algorithm\n\n";
 
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        cout << endl;
    }
 
    return 0;
}