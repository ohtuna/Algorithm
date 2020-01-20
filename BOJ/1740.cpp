#include<iostream>
#include<vector>
#include<math.h>

using namespace std;


long long Pow(int n, int cnt)
{
    if(cnt == 0) return 1;
    return n*Pow(n, cnt - 1); 
}

int main()
{
    long long n, ans = 0;
    cin >> n;

    vector<long long>v;

    while(n > 0)
    {
        v.push_back(n%2);
        n/=2;
    }

    for(int i =0 ; i<v.size(); i++)
    {
        ans += v[i] * Pow(3, i);
    }

    cout << ans;
}
