#include<iostream>
#include<algorithm>
#include<queue>
#include<cstdio>

using namespace std;

int board[1001][1001];
int visit[1001][1001];

int dy[] = {0, 1 ,-1 ,0};
int dx[] = {1, 0 ,0 ,-1};

int n;

struct Room
{
    int y;
    int x;
    int cnt;
};

int bfs(int startY, int startX)
{
    queue<Room>q;
    q.push({startY,startX, 1});
    visit[startY][startX] = 1;

    int max_room = 1;

    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int cnt = q.front().cnt;
        q.pop();

        max_room = max(cnt, max_room);

        for(int i = 0; i<4; i++)
        {
            int ny = y+dy[i];
            int nx = x+dx[i];
            if(ny < 1 || nx < 1 || ny> n || nx >n)continue;
            if(board[ny][nx] != board[y][x] + 1) continue;
            if(visit[ny][nx] >= visit[y][x] + 1)continue;
            visit[ny][nx] = cnt+1;
            q.push({ny,nx, cnt+1});
        }
    }

    return max_room;

}

int main()
{
    int tc;
    cin >> tc;
    for(int t = 1; t<=tc; t++)
    {
        int ans = 0;
        int max_room = 0;
        
        cin >> n;

        for(int y = 1; y<=n; y++)
        {
            for(int x = 1; x<=n; x++)
            {
                cin >> board[y][x];
            }
        }

        for(int y = 1; y<=n; y++)
        {
            for(int x = 1; x<=n; x++)
            {
                if(visit[y][x] == 0)
                {
                    int cnt = bfs(y,x);
                    if(max_room == 0 || max_room < cnt)
                    {
                        max_room = cnt;
                        ans = board[y][x];
                    }
                    if(max_room == cnt)
                    {
                        if(ans > board[y][x])
                        {
                            ans = board[y][x];
                        }
                    }
                }

            }
        }


        cout << "#" << t << " " << ans << " " << max_room << "\n";

        for(int y =1; y<=n; y++)
        {
            for(int x=1; x<=n; x++)
            {
                visit[y][x] = 0;
            }
        }


    }
}   
