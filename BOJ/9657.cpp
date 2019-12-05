#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int dp[1001] = {0, };
    if(n == 1 || n == 3 || n == 4)
    {
        cout << "SK";
        return 0;
    }
    else if(n==2)
    {
        cout << "CY";
        return 0;
    }

    dp[1] = 1;
    dp[2] = 0;
    dp[3] = 1;
    dp[4] = 1;

    for(int i =5; i<=1000; i++)
    {
        if(dp[i-1] + dp[i-3] + dp[i-4] < 3)
        {
            dp[i] = 1;
        }
        else
        {
            dp[i] = 0;
        }
    }

    if(dp[n] == 1)
    {
        cout << "SK";
    }
    else
    {
        cout << "CY";
    }
    


    
    
    
}
