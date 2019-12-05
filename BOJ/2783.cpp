#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    vector<double>v;
    int x, y;
    cin >> x >> y;
    v.push_back((double)x/(double)y);

    int n;

    cin >> n;

    for(int i =0; i<n; i++)
    {
        cin >> x >> y;

       v.push_back((double)x/(double)y);
    }

    sort(v.begin(), v.end());

    printf("%.2lf", v[0]*1000);

}
