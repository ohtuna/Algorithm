#include<iostream>

using namespace std;

int main()
{
    long long a;

    cin >> a;

    long long cnt = 1;

    while(1)
    {
        if(a == 1)break;

        if(a%2 == 0)a = a/2;
        else a = (3*a)+1;

        cnt++;
    }

    cout << cnt;
}
