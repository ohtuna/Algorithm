#include<iostream>
#include<queue>

using namespace std;

int visit[1000005];

int main()
{
    int n;
    cin >> n;
    
    queue<pair<int,int>>q;
    q.push({0, 0});
    

    while(!q.empty())
    {
        int dist = q.front().first;
        int move = q.front().second;
        q.pop();

        if(dist == n)
        {
            cout << move;
            return 0;
        }

        if(dist+1 <= n && (visit[dist+1] == 0 || visit[dist+1] > move))
        {
            visit[dist+1] = move;
            q.push({dist+1, move+1});
        }
        if(dist+2 <=n && (visit[dist+2] == 0 || visit[dist+2] > move))
        {
            visit[dist+2] = move;
            q.push({dist+2, move+1});
        }
        if(dist+3 <=n  && (visit[dist+3] == 0 || visit[dist+3] > move))
        {
            visit[dist+3] = move;
            q.push({dist+3, move+1});
        }
        if(dist+4 <=n  && (visit[dist+4] == 0 || visit[dist+4] > move))
        {
            visit[dist+4] = move;
            q.push({dist+4, move+1});
        }
        if(dist+5 <= n && (visit[dist+5] == 0 || visit[dist+5] > move))
        {
            visit[dist+5] = move;
            q.push({dist+5, move+1});
        }

    }


}
