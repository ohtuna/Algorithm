#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

vector<int>a;

long long ans;
int n;
long long sum[100001];

int main()
{
    scanf("%d", &n);

    a.resize(n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum[0] = a[0];
    for(int i = 1; i<n; i++)
    {
        sum[i] = sum[i-1] + a[i];
    }

    for(int  i= 0; i<n-1; i++)
    {
        ans += (sum[n-1] - sum[i]) * a[i];
    }

    cout << ans;
}
