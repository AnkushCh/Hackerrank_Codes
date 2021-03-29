#include<bits/stdc++.h>
#define pb push_back
#define f(i,n) for(int i = 0; i < n; i++)
#define v vector<int>
#define vv vector<vector<int>>
using namespace std;

v bol;
vv g;

void edge(int a, int b)
{
    g[a].pb(b);
}

void bfs(int u)
{
    queue<int>q;
    q.push(u);
    bol[u] = true;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(auto i = g[x].begin(); i != g[x].end(); i++)
        {
            if(!bol[*i]){
            q.push(*i);
            bol[*i] = true;
            }
        }
    }
}

int main()
{
    int n,e;

    cin >> n >> e;    // creating n nodes and e edges
    bol.assign(n,false);   // marking visited element false initially
    g.assign(n,vector<int>()); // creating adjancy list of graph

    int a,b;
    f(i,n)
    {
        cin >> a >> b;
        edge(a,b);
    }

    f(i,n)
    {
        if(!bol[i])
        bfs(i);
    }

    return 0;
}