#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int pSum[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, day;
    cin >> n >> day;

    vector<int>a(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }

    pSum[0] = a[0];

    for(int i = 1; i<n; i++)
    {
        pSum[i] = pSum[i-1] + a[i];
    }
    int ans = -2000000000;
    for(int i = day-1; i<n; i++)
    {
        ans = max(ans, pSum[i]-pSum[i-day]);
    }

    cout << ans;




}
