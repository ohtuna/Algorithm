#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    long long ans = 1;
    for(int i =0; i<s.length(); i++)
    {
        long long cnt = (s[i] == 'c' ? 26 : 10);
        if(i>0 && s[i] == s[i-1])
        {
            cnt-=1;
        }
        ans = (ans%1000000009)*(cnt %1000000009);
    }

    cout << ans % 1000000009;
}
