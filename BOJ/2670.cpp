#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<double>a(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }

    double ans = -1;
    for(int i = 0; i<n; i++)
    {
        double mult = 1;
        for(int j =i; j<n; j++)
        {
            mult = mult*a[j];
            if(mult > ans)
            {
                ans = mult;
            }
        }
    }

    printf("%.3lf", ans);


}
