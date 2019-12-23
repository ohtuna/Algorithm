#include<iostream>
#include<vector>
#include<utility>
#include<cstdio>

using namespace std;

int n, m;
int A[1001], B[1001];
vector<int>g[1001];
bool visit[1001];

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

    for(int i =0; i<n; i++)
    {
        int s;
        cin >> s;
        for(int j = 0; j<s; j++)
        {
            int job;
            cin >> job;
            g[i].push_back(job-1);
        }
    }

    int match = 0;

    fill(A, A+n, -1);
    fill(B, B+m, -1);

    for(int i = 0; i<n; i++)
    {
        if(A[i]==-1)
        {
            fill(visit, visit+n, false);
            if(dfs(i))match++;
        }
    }
    cout << match;

}
