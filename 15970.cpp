#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>>p(n);

    for(int i =0; i<n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    long long sum = 0;

    for(int i =0; i<n; i++)
    {
        int low = -1;
        for(int j = 0; j<n; j++)
        {
            if(i==j)continue;
            if(p[i].second == p[j].second)
            {
                if(low == -1 || low > abs(p[i].first - p[j].first))
                {
                    low = abs(p[i].first - p[j].first);
                }
            }
        }
        sum += low;
    }

    cout << sum;
}
