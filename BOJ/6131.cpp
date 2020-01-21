#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    for(int b = 1; b<=500; b++)
    {
        for(int a = b+1; a<=500; a++)
        {
            if(b*b+n == a*a)
            {
                ans++;
            }
        }
    }
    cout << ans;
}
