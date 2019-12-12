#include<iostream>
#include<memory.h>

using namespace std;

int board[101][101];
int cache[101][101];
int n;

int jump(int y, int x)
{
    if(y>=n || x >=n) return 0;
    if(y == n-1 && x == n-1) return 1;

    int &ret = cache[y][x];
    if(ret != -1) return cache[y][x];
    return ret = ((jump(y+board[y][x], x)) || (jump(y,x+board[y][x])));

}
int main()
{
    int testcase;
    cin >> testcase;

    for(int tc = 0; tc<testcase; tc++)
    {
        memset(cache, -1, sizeof(cache));
        cin >> n;

        for(int y = 0; y<n; y++)
        {
            for(int x = 0; x<n; x++)
            {
                cin >> board[y][x];
            }
        }

        int ans = jump(0, 0);

        if(ans == 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
        
    }
}
