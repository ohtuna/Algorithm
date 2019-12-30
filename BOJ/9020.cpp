#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

bool c[1000001];
int p[1000001];
int cnt = 0;

int main()
{
    c[0] = true;
    c[1] = true;
    for(int i = 2; i<=1000000; i++)
    {
        if(c[i] == false)
        {
            p[cnt++] = i;
            for(int j = i+i; j<=1000000; j+=i)
            {
                c[j]= true;
            }
        }
    }
    int tc;
    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
            int x;
            cin >> x;
            int mmin = -1;
            int ansA = 0;
            int ansB = 0;
            for(int i = 0; i<cnt; i++)
            {
                if(x-p[i] < 0)break;
                if(c[x - p[i]] == false)
                {
                    if(mmin == -1 || mmin > abs(p[i]-(x-p[i])))
                    {
                        mmin = abs(p[i] -(x-p[i]));
                        ansA = p[i];
                        ansB = x-p[i];
                    }
                }
            }
            cout << ansA << " " << ansB << "\n";
    }

}
