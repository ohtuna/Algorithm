#include<iostream>
#include<vector>

using namespace std;

int n;
vector<int>g[11];

int main()
{
    cin >>n;

    for(int i =0; i < n; i++)
    {
        int cow, loc;
        cin >> cow >> loc;
        g[cow].push_back(loc);
    }
    int ans = 0;
    for(int i =1; i<=10; i++)
    {
        int status0 = 0;
        int status1 = 0;        

        if(g[i].size() <= 1)continue;
        int l = g[i][0];
        for(int j =1; j<g[i].size(); j++)
        {
            if(g[i][j] != l)
            {
                ans++;
                l = g[i][j];
            }

        }
    }

    cout << ans;

}
