#include<iostream>
#include<vector>
#include<algorithm>
#include<memory.h>

using namespace std;

int t;
int n;
int ans;

vector<int> g[1001];
int visit[1001];

bool is_Cycle(int x, int start, int nxt)
{
	visit[x] = 1;
	if (start == nxt) return true;

	for (int i = 0; i < g[x].size(); i++)
	{
		int next = g[x][i];
		if (visit[next] == 0)
		{
			is_Cycle(next, start, next);
		}
	}

	return true;
}

int main()
{
	cin >> t;

	for (int tc = 0; tc < t; tc++)
	{
		ans = 0;
		cin >> n;


		//Graph 생성
		for (int i = 1; i <= n; i++)
		{
			int nextnode;
			cin >> nextnode;
			g[i].push_back(nextnode);
		}

		memset(visit, 0, sizeof(visit));
		for (int i = 1; i <= n; i++)
		{
			if (visit[i] == 0)
			{
				if (is_Cycle(i, i, -1))
				{
					ans++;
				}
			}
		}

		cout << ans << "\n";

		for (int i = 1; i <= n; i++)
		{
			g[i].clear();
		}

	}

}
