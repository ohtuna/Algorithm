#include<iostream>
#include<memory.h>

using namespace std;

int dp[101];

int main()
{
    while(1)
    {
        memset(dp, 0, sizeof(dp));
        int n;

        cin >> n;
        if(n==0)break;

        dp[1] = 1;

        for(int i =2; i<=n; i++)
        {
            dp[i] = dp[i-1] + (i*i);
        }

        cout << dp[n] << "\n";
    }

}
