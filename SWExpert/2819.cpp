#include<iostream>
#include<map>
#include<set>

using namespace std;

set<string>m;

int tc;
int board[4][4];
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};
string s;

void go(int y, int x)
{
    if(s.size() == 7)
    {
        if(m.count(s) > 0) return;
        m.insert(s);
        return;
    }
    s.push_back(board[y][x] + '0');

    for(int i = 0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x+ dx[i];
        if(ny < 0 || nx < 0 || ny>=4 || nx>=4)continue;
        go(ny,nx);
    }
    s.pop_back();
}

int main()
{
    cin >> tc;

    for(int t= 1; t<=tc; t++)
    {
        for(int y = 0; y<4; y++)
        {
            for(int x =0;x<4; x++)
            {
                cin >> board[y][x];
            }
        }
        for(int y = 0; y<4; y++)
        {
            for(int x =0; x<4; x++)
            {
                go(y,x);
            }
        }

        cout << "#" <<t << " " << m.size() << "\n";
        m.clear();
    }

}
