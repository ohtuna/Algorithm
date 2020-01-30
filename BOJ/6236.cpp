#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int>a(n);

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    long long left = 1;
    long long right = 10000000000;

    long long ans = -1;

    while(left <= right)
    {
        vector<long long>blueray;
        long long mid = (left+right)/2;
        long long sum = 0;
        for(int i =0; i<n; i++)
        {
            if(sum + a[i] < mid)
            {
                sum += a[i];
            }
            else
            {
                blueray.push_back(sum);
                sum = a[i];
            }
        }
        blueray.push_back(sum);
        if(blueray.size() <= m)
        {
            long long max_blueray_time = 0;
            for(int i =0; i<blueray.size(); i++)
            {
                max_blueray_time = max(blueray[i], max_blueray_time);
            }
            if(ans == -1 || max_blueray_time < ans)
            {
                ans = max_blueray_time;
            }
        }

        if(blueray.size() <= m)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }   
    }

    cout << ans;





}
