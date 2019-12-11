#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<long long>h;

long long solve(int left, int right)
{
    if(left == right) return h[left];

    long long mid = left + (right-left)/2;

    int lo = mid, hi = mid+1;
    long long height = min(h[lo], h[hi]);

    long long ret = max(solve(left, mid), solve(mid+1, right));

    ret  = max(ret, 2*height);

    while(left < lo || hi < right)
    {
        if(hi<right && (lo==left || h[lo-1] < h[hi+1]))
        {
            ++hi;
            height = min(height, h[hi]);
        }
        else
        {
            --lo;
            height = min(height, h[lo]);
        }
        
        ret = max(ret, height * (hi-lo + 1));
    }

    return ret;

}

int main()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n==0)break;

        h.resize(n);
        for(int i = 0; i<n; i++)
        {
            cin >> h[i];
        }

        long long ans = solve(0, n-1);

        cout << ans << "\n";

    }
}
