#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int A[1000], B[1000];

int n, m;
int visit[1000];
vector<int>g[1000];


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

    for(int i = 0; i<n; i++)
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

    int maxcnt = 0;

    fill(A, A+n, -1);
    fill(B, B+m, -1);

    for(int i =0; i<n; i++)
    {
        if(A[i] == -1)
        {
            fill(visit, visit+n, false);
            if(dfs(i))maxcnt++;
            fill(visit, visit+n, false);
            if(dfs(i))maxcnt++;
        }   
    }
    
    cout << maxcnt;


}
