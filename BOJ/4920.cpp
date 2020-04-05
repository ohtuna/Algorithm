#include<iostream>
#include<algorithm>
#include<memory.h>

using namespace std;

int board[101][101];
int n;

int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

int block[19][3][2]
={
    //ㅓ ㅗ ㅏ ㅜ
    {{0,1},{0,-1}, {1,0}},
    {{0,1},{0, -1}, {-1,0}},
    {{1,0}, {-1,0}, {0,1}},
    {{1,0}, {-1,0}, {0,-1}},

    // l ㅡ
    {{0, 1}, {0,2}, {0,3}},
    {{1, 0}, {2,0}, {3,0}},
    
    //ㅁ
    {{0,1}, {1,0}, {1,1}},

    //ㄱ 
    {{0,1},{0,2},{1,2}},
    {{0,1},{1,0},{2,0}},
    {{1,0},{1,1},{1,2}},
    {{0,1},{-1,1},{-2,1}},

    //ㄴ
    //{{-1,0}, {-1,1},{-1,2}},
    //{{0,1},{1,1},{2,1}},
    //{{0,1},{0,2}, {-1,2}},
    //{{1,0},{2,0},{2,1}},

    //ㄹ
    {{0,1},{1,1},{1,2}},
    {{1,0},{1,-1},{2,-1}},

    //
    //{{0,1},{-1,1},{-1,2}},
    //{{1,0},{1,1},{2,1}}



};

int visit[101][101];
int ans = 0;

void go(int depth, int y, int x, int sum)
{
    if(depth>=4)
    {
        ans = max(ans, sum);
        return;
    }

    for(int i = 0; i<4; i++)
    {
       int ny = y+dy[i];
       int nx = x+dx[i];
       if(ny < 0 || nx < 0 || ny>=n || nx >=n) continue;
       if(visit[ny][nx] == 1) continue;
       visit[ny][nx] = 1;
       go(depth+1, ny, nx, sum+board[ny][nx]);
       visit[ny][nx] = 0;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int tc = 1;
    while(1)
    {
        ans = -2000000000;
        cin >> n;

        if(n == 0) break;
        for(int y = 0; y <n; y++)
        {
            for(int x =0; x<n; x++)
            {
                cin >> board[y][x];
            }
        }


        for(int y =0; y<n; y++)
        {
            for(int x =0; x<n; x++)
            {   
                for(int i = 0; i<13; i++)
                {
                    bool check = true;
                    int s = board[y][x];
                    for(int j = 0; j<3; j++)
                    {
                        int ny = y + block[i][j][0];
                        int nx = x + block[i][j][1];

                        if(ny >= 0 && nx >=0 && ny<n && nx <n)
                        {
                            s+=board[ny][nx];
                        }
                        else
                        {
                            check = false;
                        }
                        
                    }
                    if(check == true)
                    {
                        ans = max(ans, s);
                    }
                }
            }
        }

        cout << tc << ". " << ans << "\n";
        tc++;
        memset(board, 0, sizeof(board));

    }

}
