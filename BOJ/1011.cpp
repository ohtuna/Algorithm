#include<iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for(int t = 0 ; t<tc; t++)
    {
        long long x, y;
        cin >> x >> y;

        long long cnt = 0;

        long long total = 0;
        long long range = 1;

        while(1)
        {
            x+=range;
            cnt++;
            if(x >=y)break;
            y-=range;
            cnt++;
            if(y<=x)break;
            range++;
        }


        cout << cnt << "\n";
    }
}
