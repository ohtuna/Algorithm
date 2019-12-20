#include<iostream>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    int ans = 0;
    for(int i =1; i<=100000; i++)
    {
        if(i*i <= n)ans++;
        else break;
    }

    cout << ans;
}
