#include<iostream>

using namespace std;

int map[1001][1001];
int c, r, k;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int ChangeDir(int dir)
{
    return (dir+1)%4;
}
int main()
{
    cin >> c >> r;
    cin >> k;
    
    int cnt  = 1;
    int y = r;
    int x = 1;

    map[y][x] = 1;

    if(k == 1)
    {
        cout << x << " " <<  r-y+1 << "\n";
        return 0;
    }
    if(k > r*c)
    {
        cout << 0;
        return 0;
    } 
    int dir = 0;


    while(cnt < k)
    {
        y+=dy[dir];
        x+=dx[dir];
        if(y < 1 || x>c || y>r || x <1 || map[y][x] != 0)
        {
            y-=dy[dir];
            x-=dx[dir];
            dir = ChangeDir(dir);
            continue;
        }
        
        cnt++;
        map[y][x] = cnt;
    }
    cout << x << " " << r-y+1 << "\n";
}
