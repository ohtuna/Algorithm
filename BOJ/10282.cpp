#include<iostream>
#include<queue>
#include<algorithm>
#include<functional>
#include<vector>
#include<utility>
#include<cstdio>
#define P pair<int,int>
#define INF 2000000000


using namespace std;

int tc;


int main()
{
    cin >> tc;

    for(int t=1; t<=tc; t++)
    {
        //컴퓨터 개수, 의존성 개수, 해킹 번호
        int n, d, c;
        cin >> n >> d >> c;
        vector<pair<int,int>>g[10001];
        int dist[10001];
        int visit[10001];
        int prevnode[10001];

        for(int i=0; i<d; i++)
        {
            int a, b, s;
            scanf("%d %d %d", &a, &b, &s);
            g[b].push_back({a,s});
        }

        fill(prevnode, prevnode+n+1, 0);
        fill(visit, visit+n+1, 0);
        fill(dist, dist+n+1, INF);

        priority_queue<P, vector<P>, greater<P>>pq;
        pq.push({0, c});
        dist[c] = 0;

        while(!pq.empty())
        {
            int cur = pq.top().second;
            pq.pop();
            if(visit[cur] == 1)continue;

            visit[cur] = 1;

            for(int i=0; i<g[cur].size(); i++)
            {
                int next = g[cur][i].first;
                int d = g[cur][i].second;

                if(dist[next] > dist[cur] + d)
                {
                    prevnode[next]=cur;
                    dist[next] = dist[cur] + d;
                    pq.push({dist[next], next});
                }
            }
        }
        int cnt = 1;
        int maxdist = 0;
        for(int i = 1; i<=n; i++)
        {
            if(prevnode[i] !=0)
            {
                cnt++;
            }
        }
        for(int i = 1; i<=n; i++)
        {
            if(dist[i]==INF)continue;
            maxdist = max(maxdist, dist[i]);
        }

        cout << cnt << " " << maxdist <<"\n";


    }

}
