#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int sum = 0;
    for(int i =0; i<n; i++)
    {
        int p;
        cin >> p;
        sum += p;
    }

    double ans = (double)sum / double(n);

    cout << ans;
}
