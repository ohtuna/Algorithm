#include<iostream>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    //총 n개 에서 k개 분배

    int sum = 0;

    for(int i =1; i<=k; i++)
    {
        sum += i;
    }

    if(n - sum == 0)
    {
        cout << k-1;
        return 0;
    }
    if(n - sum < 0)
    {
        cout << -1;
        return 0;
    }

    int cnt = 0;

    n-=sum;

    while(1)
    {
        n-=k;
        if(n <= 0)break;
        cnt++;
    }

    if(n == 0)
    {
        cout << (k+cnt) - (1+cnt);
    }
    else
    {
        cout << (k+cnt+1) - (1+cnt);
    }





}
