#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<int>helmet(n);
    vector<int>amor(m);


    for(int i =0; i<n; i++)
    {
        cin >> helmet[i];
    }

    for(int i =0; i<m; i++)
    {
        cin >> amor[i];
    }



    sort(helmet.begin(), helmet.end());
    sort(amor.begin(), amor.end());


    cout << helmet[n-1] + amor[m-1];
}
