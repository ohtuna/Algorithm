#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
char board[101][101];
int visit[101][101];

int dy[] = {0, 1, -1, 0, 1, 1 ,-1, -1};
int dx[] = {1, 0, 0, -1, 1, -1, 1, -1};

void bfs(int startY, int startX, int cnt)
{
    queue<pair<int,int>>q;
    q.push({startY,startX});
    visit[startY][startX] = cnt;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(visit[ny][nx] > 0) continue;
            if(ny < 0 || nx < 0|| ny>=n || nx>=m)continue;
            if(board[ny][nx] == '.') continue;

            visit[ny][nx] = cnt;
            q.push({ny,nx});
        }

    }
}

int main()
{
    cin >> n >> m;

    vector<pair<int,int>>pic_list;
    for(int y = 0; y<n; y++)
    {
        for(int x =0; x<m; x++)
        {
            cin >> board[y][x];
            if(board[y][x] == '#') pic_list.push_back({y,x});
        }
    }

    int cnt = 1;
    for(int i = 0; i<pic_list.size(); i++)
    {
        if(visit[pic_list[i].first][pic_list[i].second] == 0)
        {
            bfs(pic_list[i].first, pic_list[i].second, cnt);
            cnt++;
        }
    }


    cout << cnt -1;
}
