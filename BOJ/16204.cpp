#include<iostream>

using namespace std;

int main()
{
    int n, m, k;

    cin >> n >> m >> k;

    int Ocard = m;
    int Xcard = n-m;
    int Omark = k;
    int Xmark = n-k;
    
    int ans = 0;

    if(m <= k)
    {
        ans = Ocard + Xmark;
    }
    else
    {
        ans = Omark + Xcard;
    }

    cout << ans;
    



}
