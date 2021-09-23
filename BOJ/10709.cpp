#include<iostream>

using namespace std;

char board[102][102];
int answer[102][102];

int main()
{
    int h, w;
    cin >> h >> w;

    for(int y =0; y<h; y++)
    {
        for(int x = 0; x<w; x++)
        {
            cin >> board[y][x];
        }
    }

    int findcloud = -1;
    for(int y= 0; y<h; y++)
    {
        for(int x =0; x<w; x++)
        {
            if(board[y][x] == '.' && findcloud < 0)
            {
                findcloud = -1;
                answer[y][x] = findcloud;
            }
            if(board[y][x] == 'c')
            {
                findcloud = 0;
                answer[y][x] = findcloud;
            }
            if(board[y][x] == '.' && findcloud >= 0)
            {
                findcloud++;
                answer[y][x] = findcloud;
            }
        }
        findcloud = -1;
    }

    for(int y= 0; y<h; y++)
    {
        for(int x = 0; x<w; x++)
        {
            if(x < w-1)
            {
                cout << answer[y][x] << " ";
            }
            else
            {
                cout<<answer[y][x];
            }

        }
        cout << "\n";
    }

}
