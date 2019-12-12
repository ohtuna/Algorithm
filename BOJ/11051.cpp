#include<iostream>
#include<memory.h>

using namespace std;

long long cache[1001][1001];

long long bino(int n, int r)
{
    if(r == 0 || n == r) return 1;
    if(cache[n][r] != -1) return cache[n][r];
    return cache[n][r] = (bino(n-1, r-1) + bino(n-1, r)) % 10007;
}

int main()
{
    memset(cache, -1, sizeof(cache));
    int n, r;
    cin >> n >> r;

    int ans = bino(n,r);

    cout << ans;
}
