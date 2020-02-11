#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<pair<int,int>>jewel(n);

    for(int i =0; i<n; i++)
    {
        cin >> jewel[i].first >> jewel[i].second;
    }

    multiset<int>bag;

    for(int i =0; i<k; i++)
    {
        int temp;
        cin >> temp;
        bag.insert(temp);
    }

    sort(jewel.begin(), jewel.end(), [](pair<int,int> u, pair<int,int> v) { return u.second > v.second;});

    long long ans = 0;
    for(int i =0; i<n; i++)
    {
        auto it = bag.lower_bound(jewel[i].first);
        if(it != bag.end())
        {
            ans+=jewel[i].second;
            bag.erase(it);
        }
    }

    cout << ans;
}
