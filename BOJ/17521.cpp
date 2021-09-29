#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long long n, w;

    cin >> n >> w;

    vector<long long>day;

    for(int i =0; i<n; i++)
    {
        long long x;
        cin >> x;
        day.push_back(x);
    }

    long long coin = 0;

    for(int i =0; i<n; i++)
    {
        if(i+1 < n)
        {
            if(day[i] < day[i+1])
            {
                if(coin == 0)
                {
                    long long temp = w;
                    coin = temp/day[i];
                    w -= coin*day[i];
                }
                else
                {
                    if(day[i] < day[i+1])continue;
                    else
                    {
                        w += coin*day[i];
                        coin = 0;
                    }
                }

            }
            else
            {
                w += coin*day[i];
                coin = 0;
            }
        }
    }

    if(coin > 0)
    {
        w+= coin*day[n-1];
    }

    cout << w;






}
