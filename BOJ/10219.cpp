#include<iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        int h,w;

        cin >> h >> w;

        char board[12][12];
        for(int y =0;y<h; y++)
        {
            for(int x =0; x<w; x++)
            {
                cin >> board[y][x];
            }
        }


        for(int y = h-1; y>=0; y--)
        {
            for(int x = 0; x<w; x++)
            {
                cout << board[y][x];
            }
            cout <<"\n";
        }
    }
}
