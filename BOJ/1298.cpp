#include<iostream>
#include<vector>
#include<utility>
#include<cstdio>

using namespace std;

int n, m;

int A[101], B[101];
vector<int>g[101];
bool visit[101];


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
    cin >> n >> m;

    for(int i =0; i<m; i++)
    {
        int a, b;
        scanf("%d %d",&a, &b);
        g[a-1].push_back(b-1);
    }

    int maxcnt = 0;

    fill(A, A+n, -1);
    fill(B, B+n, -1);

    for(int i =0; i<n; i++)
    {
        if(A[i] == -1)
        {
            fill(visit, visit+n, false);
            if(dfs(i))maxcnt++;
        }
    }

    cout << maxcnt;


}
