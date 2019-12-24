#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<double,int>>res;
    vector<tuple<int, int, int>>v;

    for(int i =0 ; i<n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;
        v.push_back({x,y,s});
    }

    for(int i =0; i<n; i++)
    {
        int x, y, s;
        tie(x,y,s) = v[i];

        double calc = double(sqrt((x*x) + (y*y)))/s;
        res.push_back({calc, i}); 
    }

    sort(res.begin(), res.end());

    for(int i =0; i<res.size(); i++)
    {
        cout << res[i].second+1 << "\n";
    }


}
