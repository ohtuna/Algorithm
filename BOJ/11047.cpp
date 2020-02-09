#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<int>a(n);

    for(int i = 0; i <n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0;
    for(int i = n-1; i>=0; i--)
    {
        ans += (k/a[i]);
        k %= a[i];
    }

    cout << ans;

    
}
