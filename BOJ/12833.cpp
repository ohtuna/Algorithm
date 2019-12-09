#include<iostream>

using namespace std;

long long a, b, c;

long long XORXOR(long long a, long long b)
{
    return a^b;
}
int main()
{
    

    cin >> a >> b >> c;

    int ans = a;

    for(int i =0; i<c; i++)
    {
        ans = XORXOR(ans, b);
    }

    cout << ans;
}
