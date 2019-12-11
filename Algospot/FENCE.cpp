#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>h;

int solve(int left, int right)
{
    //base case
    if(left == right) return h[left];
    int mid = (left+right)/2;
    int ret = max(solve(left, mid), solve(mid+1, right));

    int lo = mid, hi = mid+1;
    int height = min(h[lo], h[hi]);

    ret = max(ret, height * 2);

    while(left < lo || hi < right)
    {
        //오른쪽 울타리가 오른쪽 울타리 보다 크면
        if(hi < right && (lo == left || h[lo-1] < h[hi+1]))
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
    int tc;
    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
        int n;
        cin >> n;
        h.resize(n);
        for(int i =0 ; i<n; i++)
        {
            cin >> h[i];
        }

        int ans = solve(0, n-1);
        cout << ans << "\n";
    }
}
