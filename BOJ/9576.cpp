#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdio>

using namespace std;

int A[1001], B[1001];
vector<int>g[1001];
bool visit[1001];
int n, m;

bool dfs(int a)
{
    visit[a] = true;

    for(int b : g[a])
    {
        if(B[b] == -1 || !visit[B[b]] && dfs(B[b]))
        {
            A[a] = b;
            B[b] = a;
            return true;
        }
    }   

    return false;

}

int main()
{
    int tc;

    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
        scanf("%d %d", &n, &m);
        for(int i =1; i<=m; i++)
        {
            int a,b;
            scanf("%d %d", &a, &b);
            for(int j = a; j<=b; j++)
            {
                g[i].push_back(j);
            }
        }

        int match = 0;

        fill(A, A+m+1, -1);
        fill(B, B+n+1, -1);

        for(int i =1; i<=m; i++)
        {   
            if(A[i] == -1)
            {
                fill(visit, visit+m+1, false);
                if(dfs(i))match++;
            }
        }

        cout << match << "\n";

        for(int i = 1; i<=m; i++)
        {
            g[i].clear();
        }
    }




}
