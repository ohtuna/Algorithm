#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>a(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int avg = a[n/2];
    int sum = 0;
    for(int i =0; i<n; i++)
    {
        sum += abs(a[i] - avg);
    }

    int check = 0;
    int idx = n/2;

    int mmin = avg;
    while(idx >= 1)
    {
        idx--;
        check = 0;
        for(int i =0; i<n; i++)
        {
            check += abs(a[i]-a[idx]);
        }
        if(check <= sum)
        {
            sum = check;
            mmin = a[idx];
        }
       
    }

    cout << mmin;   
}
