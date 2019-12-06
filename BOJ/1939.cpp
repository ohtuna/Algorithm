#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>
#include<functional>
#include<cstdio>

using namespace std;

int n, m;
vector<pair<int,int>>g[10001];
int visit[10001];

struct Point
{
    int cur;
    int m;
};


bool bfs(int from, int to, int max_weight)
{
    fill(visit, visit+n, 0);

    queue<int>q;

    q.push(from);
    visit[from] = 1;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int i =0; i<g[cur].size(); i++)
        {
            int next = g[cur][i].second;
            int weight = g[cur][i].first;
            if(visit[next] == 0 && weight >= max_weight)
            {
                visit[next] = 1;
                q.push(next);
            }
        }
    }
    return visit[to];
}

int main()
{
    cin >> n >> m;


    int max_weight = 0;

    for(int i =0; i<m; i++)
    {
        int x,y,cost;
        scanf("%d %d %d", &x, &y, &cost);
        --x, --y;
        g[x].push_back({cost, y});
        g[y].push_back({cost,x});
        max_weight = max_weight > cost ? max_weight : cost;
    }
    int start, end;

    cin >> start >> end;

    --start, --end;

    int left = 1;
    int right = max_weight;
    int ans = 0;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(bfs(start, end, mid))
        {
            if(ans < mid)
            {
                ans = mid;
            }
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }

    cout << ans;



}
