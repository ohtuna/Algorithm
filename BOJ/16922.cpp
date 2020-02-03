#include<iostream>

using namespace std;

bool sum[50*20+1];

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=n-i; j++)
        {
            for(int k = 0; k<=n-i-j; k++)
            {
                int l = n-i-j-k;
                int total = i*50 + j*10 + k*5 + l;
                sum[total] = true; 
            }
        }
    }

    int ans = 0;
    for(int i =1; i<=1000; i++)
    {
        if(sum[i]==true)ans++;
    }
    cout << ans;
}
