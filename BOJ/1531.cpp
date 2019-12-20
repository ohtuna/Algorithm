#include<iostream>

using namespace std;

int map[101][101];


int main()
{
    int n, m;

    cin >> n >> m;

    for(int i =0; i<n; i++)
    {
        int x1,x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i = y1; i<=y2; i++)
        {
            for(int j= x1; j<=x2; j++)
            {
                map[i][j]+=1;
            }
        }
    }

    int cnt = 0;
    for(int i = 1; i<=100; i++)
    {
        for(int j =1; j<=100; j++)
        {
            if(map[i][j] > m) cnt++;
        }
    }
    cout << cnt;
}
