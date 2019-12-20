#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int egg, n;

    cin >> egg >> n;


    vector<int>a(n);

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int price = 0;
    int total = 0;

    int totalpeople = a.size();
    
    int ansT = 0;

    for(int i = 0; i<a.size(); i++)
    {
        if(totalpeople <= egg)
        {
            total = a[i] * totalpeople;
            if(ansT < total)
            {
                ansT = total;
                price = a[i];
            }
        }
        else
        {
            total = a[i] * egg;
            if(ansT < total)
            {
                ansT = total;
                price = a[i];
            }
        }
        totalpeople--;
    }

    cout << price << " " << ansT;
}
