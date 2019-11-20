#include<iostream>
#include<cstdio>
#include<memory.h>

using namespace std;


int n, m;
char map[1001][51];
string ans;
int total;

int main()
{
    cin >> n >> m;

    for(int y =0; y<n; y++)
    {
        for(int x= 0; x<=m ; x++)
        {
            scanf("%1c", &map[y][x]);
        }
    }


    for(int x =1; x <= m; x++)
    {
        int alpha[27];
        memset(alpha, 0, sizeof(alpha));
        for(int y= 0; y<n; y++)
        {
            alpha[map[y][x] - 'A']++;
        }
        int mmax = 0;
        int idx = 0;
        for(int i =0; i<27; i++)
        {
            if(alpha[i] > 0)
            {
                if(mmax < alpha[i])
                {
                    mmax = alpha[i];
                    idx = i;
                }
            }
        }
        ans.push_back('A'+idx);
        total += (n-mmax);
    }


    cout << ans << "\n";
    cout << total << "\n";



}
