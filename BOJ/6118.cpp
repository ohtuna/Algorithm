#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<memory.h>

using namespace std;

int visit[20001];

vector<int>g[20000];
int n, m;

int main()
{
    scanf("%d %d", &n, &m);

    for(int i =0 ; i<m; i++)
    {
        int u,v;
        scanf("%d %d", &u, &v);
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    memset(visit, -1, sizeof(visit));
    queue<pair<int,int>>q;
    q.push({0, 0});
    
    visit[0] = 0;

    while(!q.empty())
    {
        int cur = q.front().first;
        int d = q.front().second;
        q.pop();


        for(int i = 0; i<g[cur].size(); i++)
        {
            int next = g[cur][i];
            if(visit[next] == -1)
            {
                visit[next] = d+1;
                q.push({next, d+1});
            }
        }
    }

    int max_dist =0;
    for(int i = 0; i<n; i++)
    {
        max_dist = max(max_dist, visit[i]);
    }

    int total_cnt = 0;
    int min_vertex = 0;

    for(int i = 0; i<n; i++)
    {
        if(visit[i] == max_dist && min_vertex == 0)
        {
            min_vertex = i;
        }
        if(visit[i] == max_dist)
        {
            total_cnt++;
        }
    }

    cout << min_vertex+1 << " " << max_dist << " " << total_cnt;

}
