#include<iostream>
#include<vector>
#include<algorithm>
#include<memory.h>

using namespace std;

int visit[11];
vector<int>path;
int dist[11][11];
int n;
const int INF = 2000000000;

int ShortestPath(int currentLength)
{
    if(path.size() == n)
    {
        if(dist[path.back()][path[0]] == 0) return INF;
        return currentLength + dist[path.back()][path[0]];
    }

    int ret = INF;

    for(int next = 0; next<n; next++)
    {
        if(visit[next] == 1)continue;
        int here = path.back();
        if(dist[here][next] == 0)continue;
        path.push_back(next);
        visit[next] = 1;
        int cand = ShortestPath(currentLength + dist[here][next]);
        ret = min(ret, cand);
        visit[next] = 0;
        path.pop_back();
    }
    return ret;
}

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> dist[i][j];
        }
    }

    int ans = 200000000;
    for(int i =0; i<n; i++)
    {
        memset(visit, 0, sizeof(visit));
        path.clear();
        path.push_back(i);
        visit[i] = 1;
        int d = ShortestPath(0);
        ans = min(ans, d);
    }


    cout << ans;

}
