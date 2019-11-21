#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int money[5] = {100, 20, 10, 5, 1};
    int n;
    cin >> n;
    int idx = 0;
    int ans = 0;
    while(n>0)
    {
        if(n-money[idx] >= 0)
        { 
            n-=money[idx];
            ans++;
        }
        else
        {
            idx++;
            continue;
        }
        
    }

    cout << ans;
}
