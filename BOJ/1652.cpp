#include<iostream>
#include<vector>
#include<memory.h>

using namespace std;

char map[101][101];
int visit[101][101];

int main()
{
    int n;
    cin >> n;

    for(int y = 0; y < n; y++)
    {
        for(int x =0; x<n; x++)
        {
            cin >> map[y][x];
        }
    }

    int ansA = 0;
    vector<pair<int,int>>check;
    for(int y = 0; y<n; y++)
    {
        for(int x =0; x<n; x++)
        {
            if(map[y][x] == 'X')continue;
            int cnt = 0;
            for(int k = 0; k<n; k++)
            {
                if(visit[y][x + k ] == 1 || map[y][x + k] == 'X' || x+k >= n)break;
                check.push_back({y,x+k});
            }
            if(check.size() >= 2)
            {
                for(int i = 0; i<check.size(); i++)
                {
                    visit[check[i].first][check[i].second] = 1;
                   
                }
                 ansA++;
            }
            check.clear();
        }
    }

    memset(visit, 0, sizeof(visit));
    check.clear();
    int ansB = 0;
    for(int x = 0; x<n; x++)
    {
        for(int y =0; y<n; y++)
        {
            if(map[y][x] == 'X')continue;
            int cnt = 0;
            for(int k = 0; k<n; k++)
            {
                if(visit[y+k][x] == 1 || map[y+k][x] == 'X' || y+k >= n)break;
                check.push_back({y+k,x});
            }
            if(check.size() >= 2)
            {
                for(int i = 0; i<check.size(); i++)
                {
                    visit[check[i].first][check[i].second] = 1;
                    
                }
                ansB++;
            }
            check.clear();
        }
    }

    //가로

    cout << ansA << " " << ansB;

}
