#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int r, c;

const int coverType[4][3][2] =
{
    {{0, 0}, {1, 0}, {0, 1}},
    {{0, 0}, {0, 1}, {1, 1}},
    {{0, 0}, {1,0}, {1,1}},
    {{0, 0}, {1,0}, {1, -1}}
};


bool set(vector<vector<int>> &board, int y, int x, int type, int delta)
{
    for(int i =0; i<3; i++)
    {
        const int ny = y + coverType[type][i][0];
        const int nx = x + coverType[type][i][1];

        if(ny < 0 || nx < 0 || ny>=board.size() || nx>=board[0].size() || board[ny][nx] == 1) return false;
    }
    return true;
}

pair<int,int> Check(vector<vector<int>> &board)
{
    for(int y =0; y<r; y++)
    {
        for(int x =0; x<c; x++)
        {
            if(board[y][x] == 0) return pair<int,int>(y,x);
        }
    }
    return pair<int,int>(-1, -1);
}

void DrawBlock(vector<vector<int>> &board, int y, int x, int type, int color)
{
    for(int i = 0; i<3; i++)
    {
        int ny = y + coverType[type][i][0];
        int nx = x + coverType[type][i][1];

        board[ny][nx] = color;
    }
}

int cover(vector<vector<int>> &board)
{
    int y = -1;
    int x = -1;
    if(Check(board).first == -1 && Check(board).second == -1) return 1;
    else
    {
        y = Check(board).first;
        x = Check(board).second;
    }
    
    int ret = 0;
    for(int type = 0; type<4; type++)
    {
        if(set(board, y, x, type, 1))
        {
            DrawBlock(board, y, x, type, 1);
            ret +=cover(board);
            DrawBlock(board, y, x, type, 0);
        }
    }

    return ret;
}

int main()
{
    int tc;

    cin >> tc;

    for(int q = 0; q<tc; q++)
    {
        
        cin >> r >> c;
        vector<vector<int>>board;
        board.resize(r, vector<int>(c, 0));

        for(int y = 0; y<r; y++)
        {
            string temp;
            cin >> temp;
            for(int x = 0; x<temp.size(); x++)
            {
                if(temp[x] == '#')
                {
                    board[y][x] = 1;
                }
                else
                {
                    board[y][x] = 0;
                }
                
            }
        }


        int ans = cover(board);


        cout << ans << "\n";


    }
}
