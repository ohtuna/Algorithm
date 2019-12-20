#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<pair<int,int>>v;

    for(int i =0; i<n; i++)
    {
        int dist, cost;
        cin >> dist >> cost;
        v.push_back({dist,cost});
    }

    int ans = 0;

    for(int i = 0; i<n; i++)
    {
        bool flag = true;
        int avgDist = v[i].first;
        int avgCost = v[i].second;
        int cnt = 0;
        for(int j = 0; j<n; j++)
        {
            if(i==j)continue;
            if(avgDist >= v[j].first)
            {
                if(v[j].second < avgCost) flag = false;
            }
            if(avgCost >= v[j].second)
            {
                if(v[j].first < avgDist) flag = false;
            }
            
        }
        if(flag == true) ans++;
    }

    cout << ans;
}
