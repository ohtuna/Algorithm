#include<iostream>
#include<string>
#include<math.h>
#include<cstdlib>

using namespace std;

const long long M = 1234567891;

int main()
{
    int n;
    cin >> n;

    char str[51];

    for(int i = 0; i<n; i++)
    {
        cin >> str[i];
    }

    long long mult = 1;

    long long sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += (str[i]-96) * mult;
        mult*=31;
        mult%=M;
        sum %= M;
        
    }

    cout << sum % M;

}
