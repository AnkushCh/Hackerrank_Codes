#include<bits/stdc++.h>
#define pb push_back
#define f(i,n) for(int i = 0; i < n; i++)
#define v vector<int>
#define vv vector<vector<int>>
using namespace std;

vector<bool> bol;
vv g;

void edge(int a, int b)
{
    g[a].pb(b);
    g[b].pb(a);
}

void bfs(int u)
{
    queue<int> q;
  
    q.push(u);
    bol[u] = true;
  
    while (!q.empty()) {
  
        int f = q.front();
        q.pop();
  
        cout << f << " ";

        for (auto i = g[f].begin(); i != g[f].end(); i++) {
            if (!bol[*i]) {
                q.push(*i);
                bol[*i] = true;
            }
        }
    }
}
int main()
{
    int n = 5;
    bol.assign(n,false);   // marking visited element false initially
    g.assign(n,vector<int>()); // creating adjancy list of graph

    edge(0, 1);
    edge(0, 4);
    edge(1, 2);
    edge(1, 3);
    edge(1, 4);
    edge(2, 3);
    edge(3, 4);
    
    f(i,n)
    {
        if(!bol[i])
        bfs(i);
    }

    return 0;
}