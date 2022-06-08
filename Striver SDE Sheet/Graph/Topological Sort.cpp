#include<bits/stdc++.h>

stack<int> st;
void solve(vector<int> adj[],vector<int>& visited,int i)
{
    visited[i] = 1;
    
    for(auto x : adj[i])
    {
        if(visited[x]==0)
        {
            solve(adj,visited,x);
        }
    }
    st.push(i);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int> ans;
    vector<int> adj[v];
    for(int i=0;i<e;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    
    vector<int> visited(v+1,0);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==0)
        {
            solve(adj,visited,i);
        }
    }
    
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    
    return ans;
}