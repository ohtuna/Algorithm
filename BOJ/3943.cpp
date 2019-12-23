#include<iostream>
#include<cstdio>
#include<map>
#include<memory.h>
#include<algorithm>

using namespace std;

map<int,int>dp;

int go(int n)
{
    if(n==1) return 1;
    if(dp[n]) return dp[n];

    if(n%2==0) return dp[n] = max(n, go(n/2));
    else return dp[n] = max(n, go(n*3 +1));  
}
int main()
{
    int tc;
    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
        
        int n;
        scanf("%d", &n);
        int ans = go(n);

        printf("%d\n", ans);
    }
}
