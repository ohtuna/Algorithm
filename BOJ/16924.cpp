#include<iostream>
#include<vector>
#include<tuple>

using namespace std;

int n, m;

char board[105][105];

int main()
{
    cin >> n >> m;

    for(int y= 1; y<=n; y++)
    {
        for(int x =1; x<=m; x++)
        {
            cin >> board[y][x];
        }
    }

    vector<tuple<int,int,int>>v;
    for(int y = 1; y<=n; y++)
    {
        for(int x =1; x<=m; x++)
        {
            int l = 0;
            if(board[y][x] == '*')
            {
                for(int i = 1; ; i++)
                {
                    if(y+i > n || y-i <= 0 || x+i > m || x-i <= 0)break;
                    if(board[y+i][x] == '*' && board[y-i][x] == '*' && board[y][x+i] == '*' && board[y][x-i] == '*')
                    {
                        l = i;  
                    }
                    else break;
                }
            }
            if(l>0)
            {
                for(int i = 1; i<=l; i++)
                {
                    v.push_back({y,x, i});
                }
            }
        }
    }

    for(int i =0; i<v.size(); i++)
    {
        int y,x,z;
        tie(y,x,z) = v[i];
        board[y][x] = '1'; 
        for(int l = 1; l<=z; l++)
        {
            board[y+l][x] = '1';
            board[y-l][x] = '1';
            board[y][x+l] = '1';
            board[y][x-l] = '1'; 
        }
    }

    for(int y= 1; y<=n; y++)
    {
        for(int x =1; x<=m; x++)
        {
            if(board[y][x] == '*')
            {
                cout << -1;
                return 0;
            }
        }
    }

    cout << v.size() << "\n";
    for(int i =0; i<v.size(); i++)
    {
        int y,x,z;
        tie(y,x,z) = v[i];

        cout << y << " " << x << " " << z << "\n";
    }
}
