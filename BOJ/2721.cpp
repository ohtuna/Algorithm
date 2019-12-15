#include<iostream>

using namespace std;
long long sum[310];
int main()
{
    int tc;
    cin >> tc;

    sum[1] = 1;
    for(int i =2; i<=310; i++)
    {
        sum[i] = sum[i-1] + i;
    }



    for(int t = 0; t<tc; t++)
    {
        int n;
        cin >> n;
        int mult = 1;
        long long ans = 0;
        for(int i =1; i<=n; i++)
        {
            ans+= sum[i+1] * i;
        }
         cout << ans << "\n";
        
        
    }
}
