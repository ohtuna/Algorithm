#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i =0; i<n; i++)
        {
            cin >> a[i];
        }
        vector<int>Sum(n);
        Sum[0] = a[0];

        for(int i =1; i<n; i++)
        {
            Sum[i] = Sum[i-1] + a[i];
        }

        int ans = -2000000000;
        for(int i =0; i<n; i++)
        {
            ans = max(Sum[i], ans);
            for(int j=0; j<i; j++)
            {
                ans = max(Sum[i] - Sum[j], ans);
            }
        }

        cout << ans << "\n";



    }
}
