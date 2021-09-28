#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>>cow(n);

    for(int i =0; i<n; i++)
    {
        int x,y;
        cin >> x >> y;
        cow[i].first = x;
        cow[i].second = y;
    }

    sort(cow.begin(), cow.end());

    int ans = 0;
    for(int i =0; i<n; i++)
    {
        if(i == 0)
        {
            ans = cow[i].first + cow[i].second;
        }
        else
        {
            if(ans >= cow[i].first)
            {
                ans+=cow[i].second;
            }
            else
            {
                ans = cow[i].first+cow[i].second;
            }
        }
    }

    cout << ans;
}
