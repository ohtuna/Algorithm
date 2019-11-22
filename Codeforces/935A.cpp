#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int k = 1;
    int ans = 0;
    while(k <= n)
    {
        if(k==n)break;
        if((n-k) % k == 0)
        {
            ans++;
        }
        k++;
    }

    cout << ans;

}
