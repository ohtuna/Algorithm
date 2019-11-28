#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    long long a[4];

    for(int i =0; i<4; i++)
    {
        cin >> a[i];
    }
    
    long long mmin = a[0];
    long long mmax = a[0];
    long long sum = 0;
    for(int i =0; i<4; i++)
    {
        sum += a[i];
        mmin = min(mmin, a[i]);
        mmax = max(mmax, a[i]);
    }

    cout << abs((mmin+mmax) - (sum - (mmin+mmax)));
}
