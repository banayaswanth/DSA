#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int u,int v)
{
	adj[v].push_back(u);
	adj[u].push_back(v);
}
void BFS(vector<int>adj[],int V,int S)
{
	bool visited[V];
	for(int i=0;i<V;i++)
	{
	 visited[i]=false;
	}
	queue<int>q;
	q.push(S);
	visited[S]=true;
	while(q.empty()==false)
	{
		int u = q.front();
		q.pop();
		cout<<u<<" ";
		for(int x:adj[u])
		{
			if(visited[x]==false)
			{
				visited[x]=true;
				q.push(x);
			}
		}
	}
}

int main()
{
	int V=4;
	vector<int>adj[V];
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,2);
	addedge(adj,1,3);
	BFS(adj,V,0);
	
}
