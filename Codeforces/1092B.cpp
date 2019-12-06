#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>s(n);

    for(int i =0; i<n; i++)
    {
        cin >> s[i];
    }
    int ans = 0;

    sort(s.begin(), s.end());
    for(int i =1; i<n; i+=2)
    {
        ans += (s[i] - s[i-1]);
    }

    cout << ans;
}
