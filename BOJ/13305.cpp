#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    //distance
    vector<long long>distance;
    for(int i =0; i<n-1; i++)
    {
        long long x;
        cin >> x;
        distance.push_back(x);
    }
    vector<long long>oil;
    for(int i =0; i<n; i++)
    {
        long long x;
        cin >> x;
        oil.push_back(x);
    }


    long long ans = 0;
    long long oilprice = 0;

    for(int i =0; i<n-1; i++)
    {
        if(i==0)
        {
            ans += oil[i] * distance[i];
            oilprice = oil[i];
        }
        else
        {
            if(oilprice <= oil[i])
            {
                ans+=oilprice * distance[i];
            }
            else
            {
                oilprice = oil[i];
                ans+=oilprice *distance[i];
            }
        }

    }

    cout << ans;




}
