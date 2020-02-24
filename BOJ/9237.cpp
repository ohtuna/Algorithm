#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;

int ccmp(int a, int b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int>a(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), ccmp);

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] + (i+1) > ans)
        {
            ans = a[i] + (i+1);
        }
    }

    cout << ans + 1;
}
