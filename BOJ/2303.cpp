#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >>n;

    int ans = 0;
    int n_max = -1;
    for(int i =0; i<n; i++)
    {
        int a[5];
        for(int j =0; j<5; j++)
        {
            cin >> a[j];
        }

        for(int l1 = 0; l1<5; l1++)
        {
            for(int l2 = l1+1; l2<5; l2++)
            {
                for(int l3 = l2+1; l3<5; l3++)
                {
                    if(n_max == -1 || n_max <= ((a[l1] + a[l2] + a[l3]) % 10))
                    {
                        ans = i;
                        n_max = (a[l1] + a[l2] + a[l3])%10;
                    }
                }
            }
        }
    }

    cout << ans + 1;
}
