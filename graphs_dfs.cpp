#include<bits/stdc++.h>
#define v vector<int>
#define vv vector<vector<int>>
#define f(i,n) for(int i = 0; i < n; i++)
#define pb push_back
using namespace std;

void edge(v adj[], int u, int vi)
{
    adj[u].pb(vi);
    adj[vi].pb(u);
}
void dfsutil(int u, v adj[], vector<bool>&b)
{
    b[u] = true;
    cout << u <<" ";
    for(int i = 0; i < adj[u].size(); i++)
    {
        if(b[adj[u][i]] == false)
        dfsutil(adj[u][i],adj,b);
    }
}

void dfs(v adj[], int n)
{
    vector<bool>b(n,false);
    f(u,n)
    {
        if(b[u] == false)
        dfsutil(u,adj,b);
    }
}

int main()
{
    int n = 5;
    v adj[n];
    edge(adj, 0, 1);
    edge(adj, 0, 4);
    edge(adj, 1, 2);
    edge(adj, 1, 3);
    edge(adj, 1, 4);
    edge(adj, 2, 3);
    edge(adj, 3, 4);
    dfs(adj,n);
    
    return 0;

}
