#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int n, m;

int A[201], B[201];
vector<int>g[201];
bool visit[201];

bool dfs(int a)
{
    visit[a] = true;

    for(int b : g[a])
    {
        if(B[b] == -1 || !visit[B[b]] && dfs(B[b]))
        {
            A[a]=b;
            B[b]=a;
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;


    for(int i = 0; i<n; i++)
    {
        int c;
        cin >> c;

        for(int j = 0; j<c; j++)
        {
            int h;
            cin >>h;
            g[i].push_back(h-1);
        }
    }

    int match = 0;
    fill(A, A+n, -1);
    fill(B, B+m, -1);

    for(int i = 0; i<n; i++)
    {
        if(A[i] == -1)
        {
            fill(visit, visit+n, false);
            if(dfs(i))match++;
        }
    }

    cout << match;

}
