#include<iostream>

using namespace std;

char map[101][101];

int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};
int main()
{
    int n, m;

    cin >> n >> m;

    for(int y =0; y<n; y++)
    {
        for(int x =0; x<m; x++)
        {
            cin >> map[y][x];
        }
    }


    int startY = -1;
    int startX = -1;
    for(int y =0; y<n; y++)
    {
        for(int x =0; x<m; x++)
        {
            if(map[y][x] == '#')
            {
                startY = y;
                startX = x;
                break;
            }
        }
        if(startY > -1 && startX > -1)break;
    }

    int cnt = 1;
    for(int k = 1; ; k++)
    {
        int tmpy = startY + dy[0] * k;
        int tmpx = startX + dx[0] * k;
        if(tmpx >=m)break;
        if(map[tmpy][tmpx] == '.')break;
        if(map[tmpy][tmpx] == '#') cnt++;
    }
    int cnt2 = 1;
    for(int k = 1; ; k++)
    {
        int tmpy = startY + dy[3] * k;
        int tmpx = startX + dx[3] * k;
        if(tmpy >=n)break;
        if(map[tmpy][tmpx] == '.')break;
        if(map[tmpy][tmpx] == '#') cnt2++;
    }
    int max_cnt = max(cnt, cnt2);

    int temp_cnt = 1;
    for(int k = 1; ; k++)
    {
        int tmpy = startY + dy[0]*k;
        int tmpx = startX + dx[0]*k;
        if(tmpx >=m)break;
        if(map[tmpy][tmpx] == '.')break;
        if(map[tmpy][tmpx] == '#')temp_cnt++;
    }
    if(temp_cnt < max_cnt)
    {
        cout << "UP";
        return 0;
    }

    temp_cnt = 1;
    for(int k = 1; ; k++)
    {
        int tmpy = startY + dy[3]*k;
        int tmpx = startX + dx[3]*k;
        if(tmpy >=n)break;
        if(map[tmpy][tmpx] == '.')break;
        if(map[tmpy][tmpx] == '#')temp_cnt++;
    }
    if(temp_cnt < max_cnt)
    {
        cout << "LEFT";
        return 0;
    }

    temp_cnt = 1;
    for(int k = 1; ; k++)
    {
        int tmpy = startY + dy[3]*k;
        int tmpx = (startX + max_cnt-1) + dx[3]*k;
        if(tmpy >=n)break;
        if(map[tmpy][tmpx] == '.')break;
        if(map[tmpy][tmpx] == '#')temp_cnt++;
    }
    if(temp_cnt < max_cnt)
    {
        cout << "RIGHT";
        return 0;
    }

    temp_cnt = 1;
    for(int k = 1; ; k++)
    {
        int tmpy = (startY + max_cnt -1) + dy[0]*k;
        int tmpx = startX + dx[0]*k;
        if(tmpx >=m)break;
        if(map[tmpy][tmpx] == '.')break;
        if(map[tmpy][tmpx] == '#')temp_cnt++;
    }
    if(temp_cnt < max_cnt)
    {
        cout << "DOWN";
        return 0;
    }


}
