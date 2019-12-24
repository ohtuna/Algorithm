#include<iostream>
#include<vector>
#include<utility>

using namespace std;

struct Shark
{
    int s;
    int v;
    int w;
};

int n;
int A[101], B[101];
bool visit[101];
vector<Shark>s_list;
vector<int>g[101];

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
    cin >> n;

    for(int i =0; i<n; i++)
    {
        int s, v, w;
        cin >> s >> v >> w;
        s_list.push_back({s,v,w});
    }

    for(int i =0; i<n; i++)
    {
       for(int j =0; j<n; j++)
       {
           if(i==j)continue;
           if(s_list[i].s == s_list[j].s && s_list[i].v == s_list[j].v && s_list[i].w == s_list[j].w && i>j)continue;
           if(s_list[i].s >= s_list[j].s && s_list[i].v >= s_list[j].v && s_list[i].w >= s_list[j].w)
           {
               g[i].push_back(j);
           }

       }
    }

    fill(A, A+n, -1);
    fill(B, B+n, -1);
    int match = 0;
    for(int i =0; i<n; i++)
    {
        if(A[i]==-1)
        {
            fill(visit, visit+n, false);
            if(dfs(i)) match++;
            fill(visit, visit+n, false);
            if(dfs(i)) match++;
        }
    }

    cout << n-match;
}
