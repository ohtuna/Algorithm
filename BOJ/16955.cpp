#include<iostream>

using namespace std;

char map[11][11];

int dy[] = {0, -1, 0, 1, -1, -1, 1, 1};
int dx[] = {1, 0, -1, 0, 1, -1, 1, -1};

bool IsRange(int y, int x)
{
    if(y < 0 || x < 0 || y >= 10 || x >=10) return false;
    return true;
}
int main()
{
    for(int y =0; y < 10; y++)
    {
        for(int x =0; x<10; x++)
        {
            cin >> map[y][x];
        }
    }


    for(int y =0; y<10; y++)
    {
        for(int x =0; x<10; x++)
        {
            if(map[y][x] == '.')
            {
                map[y][x] = 'X';
                
                int startY;
                int startX;
                int cnt = 0;
                for(int k = 1; ; k++)
                {
                    startY = y + dy[0] * k;
                    startX = x + dx[0] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }

                for(int k = 1; ; k++)
                {
                    startY = y + dy[2] * k;
                    startX = x + dx[2] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }

                if(cnt >= 4)
                {
                    cout << 1;
                    return 0;
                }

                cnt = 0;


                for(int k = 1; ; k++)
                {
                    startY = y + dy[1] * k;
                    startX = x + dx[1] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }

                for(int k = 1; ; k++)
                {
                    startY = y + dy[3] * k;
                    startX = x + dx[3] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }

                if(cnt >= 4)
                {
                    cout << 1;
                    return 0;
                }


                cnt = 0;


                for(int k = 1; ; k++)
                {
                    startY = y + dy[5] * k;
                    startX = x + dx[5] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }
                for(int k = 1; ; k++)
                {
                    startY = y + dy[6] * k;
                    startX = x + dx[6] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }

                if(cnt >= 4)
                {
                    cout << 1;
                    return 0;
                }


                cnt = 0;


                for(int k = 1; ; k++)
                {
                    startY = y + dy[4] * k;
                    startX = x + dx[4] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }
                for(int k = 1; ; k++)
                {
                    startY = y + dy[7] * k;
                    startX = x + dx[7] * k;
                    if(!IsRange(startY, startX))break;
                    if(map[startY][startX] == 'X')
                    {
                        cnt++;
                        continue;
                    }
                    else break;
                }

                if(cnt >= 4)
                {
                    cout << 1;
                    return 0;
                }

                map[y][x] = '.';    


            }
        } 
    }
    


    cout << 0;
}
