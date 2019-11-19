#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<cstdio>

using namespace std;

int n;
int node[100002];
vector<int>g[100002];
int visit[100002];


void bfs()
{
	queue<int>q;
	q.push(1);
	visit[1] = 1;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i = 0; i < g[cur].size(); i++)
		{
			int next = g[cur][i];
			if (visit[next] == 0)
			{
				visit[next] = 1;
				node[next] = cur;
				q.push(next);
			}
		}
	}
}


int main()
{
	cin >> n;

	for (int i = 1; i <= n - 1; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);
		g[u].push_back(v);
		g[v].push_back(u);
	}

	bfs();

	for (int i = 2; i <= n; i++)
	{
		cout << node[i] << "\n";
	}
}
