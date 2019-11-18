#include<iostream>
#include<queue>
#include<vector>
#include<functional>
#include<utility>
#include<algorithm>
#include<cstdio>
#define INF 10000000000000
#define P pair<long long, long long> 

using namespace std;

int tc;
int n, m;
long long ans;

int startNode;
int endNode;
vector<P>g[100005];
long long dist[100005];
int visit[100005];

int main()
{
    scanf("%d", &tc);
    for(int t = 1; t<=tc; t++)
    {
        cin >> n >> m >> startNode >> endNode;
        for(int i=0; i<m; i++)
        {
            long long x, y, cost;
            scanf("%lld %lld %lld", &x, &y, &cost);
            g[x].push_back({y, cost});
            g[y].push_back({x, cost});
        }

        for(int i =1; i<=n; i++)
        {
            dist[i] = INF;
            visit[i] = 0;
        }

        priority_queue<P, vector<P>, greater<P>>pq;
        pq.push({0,startNode});
        dist[startNode] = 0;

        while(!pq.empty())
        {
            int cur = pq.top().second;
            pq.pop();

            if(visit[cur] == 1) continue;

            visit[cur] = 1;

            for(int i= 0; i<g[cur].size(); i++)
            {
                long long next = g[cur][i].first;
                long long d = g[cur][i].second;

                if(dist[next] > dist[cur] + d)
                {
                    dist[next] = dist[cur] + d;
                    pq.push({dist[next], next});
                }
            }
        }
        printf("#%d %lld\n", t, dist[endNode]);

        
        

        for(int i =1; i<=n; i++)
        {
            g[i].clear();
        }
    }
}
