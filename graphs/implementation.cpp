#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    
    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};
void prepare_Adj_Lst(unordered_map<int, list<int> > &adjList, vector<vector<int> > &edges)
{
    for(int i = 0; i < edges.size(); i++)
    {
        int u = edges[0][i];
        int v = edges[1][i];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
}

void bfsTraversal(unordered_map<int, list<int> > &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for(auto i : adjList[frontNode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
vector <int> bfsAns(int n, vector<vector<int>> &adj)
{
    unordered_map<int, list<int> > adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepare_Adj_Lst(adjList, adj);

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            bfsTraversal(adjList, visited, ans, i);
        }
    }
    return ans;
} 
int main()
{
    int n;
    cout << "Enter number of nodes " << endl;
    cin >> n;

    int m;
    cout << "Enter number of edges " << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.printAdj(); 

    vector<vector<int>> adj;
    bfsAns(0,adj);
}