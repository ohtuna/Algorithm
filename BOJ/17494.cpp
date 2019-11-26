#include<iostream>

using namespace std;

int main()
{
    int n, t, c, p;

    cin >> n >> t >> c >> p;

    n--;
    int cnt = 0;
    while(n > 0)
    {
        n-= t;
        cnt++;
    }
    if(n < 0)
    {
        cnt--;
    }

    cout << p*cnt*c;
}
