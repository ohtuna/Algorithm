#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int n, m, b;
int board[501][501];

int main()
{
    cin >> n >> m>> b;

    for(int y =0; y<n; y++)
    {
        for(int x =0; x<m; x++)
        {
            cin >> board[y][x];
        }
    }

    int ans = 987654321;
    int block = 0;

    //블록 제거 2초 (인벤토리 넣음)
    //블록 인벤토리에서 꺼내서 쌓기 1초 
    for(int i = 0; i<=256; i++)
    {
        int time = 0;
        vector<int>blocklist;
        int inven = b;

        for(int y =0; y<n; y++)
        {
            for(int x =0; x<m; x++)
            {
                if(board[y][x] == i)continue;
                if(board[y][x] > i)
                {
                    inven+= board[y][x]-i;
                    time += (board[y][x]-i) * 2;
                }
                else
                {
                    blocklist.push_back(board[y][x]);
                }
       
            }
        }
        bool f = true;
        for(int j = 0; j<blocklist.size(); j++)
        {
            
            if(inven< (i-blocklist[j]))
            {
                f = false;
                break;
            }
            time += (i-blocklist[j]);
            inven = inven-(i-blocklist[j]);
            if(inven < 0)
            {
                f = false;
                break;
            }
        }

        if(f== true && ans > time)
        {
            ans = time;
            block = i;
        }
        if(f == true && ans == time)
        {
            block = max(block, i);
        }
    }

    cout << ans << " " << block;
}
