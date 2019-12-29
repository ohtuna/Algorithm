#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    long long n, a;
    cin >> n >> a;

    long long cnt = 0;
    for(long long i = a; i<=n; i *=a)
    {
        cnt = cnt + n / i;
    }

    cout << cnt;
    
}
