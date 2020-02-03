#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = 0;
    for(int i = 0; i<=100000; i++)
    {
        int p = 2*i*c + max(0, x-i)*a + max(0, y-i)*b;
        if(ans == 0 || ans > p)
        {
            ans = p;
        }
    }
    cout << ans;
}
