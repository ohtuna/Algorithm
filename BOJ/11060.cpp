#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int n;

int visit[1001];

int main()
{
    cin >>n;

    vector<int>a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    queue<pair<int,int>>q;
    q.push({0, 0});
    int ans = -1;

    while(!q.empty())
    {
        int cur = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if(visit[cur] == 1) continue;
        if(ans != -1 && ans >cnt)continue;
        if(cur > n-1)continue;
        visit[cur] = 1;

        if(cur == n-1)
        {
            if(ans == -1 || ans > cnt)
            {
                ans = cnt;
            }
        }
        for(int i = 1; i<=a[cur]; i++)
        {
            q.push({cur+i, cnt+1});
        }
    }


    cout << ans;


    
}
