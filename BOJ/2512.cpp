#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long>a(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    long long ans = 0;
    for(int i =0; i<n; i++)
    {
        sum += a[i];
        ans = max(ans, a[i]);
    }
    long long m;
    cin >> m;
    if(sum <= m)
    {
        cout << ans;
        return 0;
    }

    long long left = 1;
    long long right = m;


    while(left <=right)
    {
        long long mid = (left+right)/2;
        sum = 0;
        for(int i =0; i<n; i++)
        {
            if(a[i] <= mid)
            {
                sum+= a[i];
            }
            else
            {
                sum+=mid;
            }
        }

        if(sum > m)
        {
            right = mid-1;
        }
        else
        {
            left = mid +1;
        }
    }
    cout << right;

    
}
