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

    vector<int>a(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int sum = 0;
    int acktime = 0;
    for(int i =0; i<n; i++)
    {
        sum += a[i] + acktime;
        acktime += a[i];

    }

    cout << sum;
}
