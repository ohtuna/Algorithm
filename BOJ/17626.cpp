#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dp[50010];
const int MAX = 987654321;

int main()
{
    int n;
    int minNum;
    vector<int>v;

    cin >> n;

    dp[0] = 0;
    dp[1] = 1;

    for(int i =1; i<=n; i++)
    {
        v.push_back(i*i);
    }

    for(int i = 2; i<=n; i++)
    {  
        minNum = MAX;

        for(int j = 0; v[j] <=i; j++)
        {
            int temp = i - v[j];
            minNum = min(minNum, dp[temp]);
        }

        dp[i] = minNum +1;
    }

    cout << dp[n];


}
