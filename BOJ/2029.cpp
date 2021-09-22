#include<iostream>
#include<vector>

using namespace std;

char board[12][12];

vector<pair<int,int>>Point;


int total;

int FindFirst(int y, int x, int cnt)
{
    bool find = false;
    //동쪽 체크
    int ny = y;
    int nx = x;
    int temp = 0;
    while(1)
    {
        nx++;
        if(nx>9 || nx < 0)break;
        if(ny>9 || ny < 0)break;
        if(board[ny][nx] == '.')break;
        if(board[ny][nx] == '-')
        {
            temp++;
        }
        if(cnt == temp)
        {
            find = true;
            break;
        }
    }
    if(find == false) return 0;

    find = false;

    nx++;

    temp = 0;
    while(1)
    {
        ny++;
        if(nx>9 || nx < 0)break;
        if(ny>9 || ny < 0)break;
        if(board[ny][nx] == '.')break;
        if(board[ny][nx] == '|')
        {
            temp++;
        }
        if(cnt == temp)
        {
            find = true;
            break;
        }
    }

    if(find == false) return 0;

    ny++;

    find = false;
    temp = 0;
    while(1)
    {
        nx--;
        if(nx>9 || nx < 0)break;
        if(ny>9 || ny < 0)break;
        if(board[ny][nx] == '.')break;
        if(board[ny][nx] == '-')
        {
            temp++;
        }
        if(cnt == temp)
        {
            find = true;
            break;
        }
    }
    if(find == false) return 0;
    nx--;

    find = false;
    temp = 0;
    while(1)
    {
        ny--;
        if(nx>9 || nx < 0)break;
        if(ny>9 || ny < 0)break;
        if(board[ny][nx] == '.')break;
        if(board[ny][nx] == '|')
        {
            temp++;
        }
        if(cnt == temp)
        {
            find = true;
            break;
        }
    }
    if(find == false) return 0;

    return 1;
}


int main()
{
    for(int y =0; y<10; y++)
    {
        for(int x =0; x<10; x++)
        {
            cin >> board[y][x];
            if(board[y][x] == '+')
            {
                Point.push_back({y,x});
            }
        }
    }

    for(int i =0; i<Point.size(); i++)
    {
        total+= FindFirst(Point[i].first, Point[i].second, 2);
    }
    for(int i =0; i<Point.size(); i++)
    {
        total+= FindFirst(Point[i].first, Point[i].second, 4);
    }
    for(int i =0; i<Point.size(); i++)
    {
        total+= FindFirst(Point[i].first, Point[i].second, 6);
    }

    int tempTotal = 0;
    for(int i =0; i<10; i++)
    {
        for(int j =0; j<10; j++)
        {
            if(board[i][j] == '-') tempTotal++;
            if(board[i][j] == '|') tempTotal++;
        }
    }


    cout << (48-tempTotal)/2 << " " << total;




}
