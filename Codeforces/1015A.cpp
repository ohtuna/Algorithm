#include<iostream>
#include<vector>

using namespace std;


int p[101];

int main()
{
    int n, m;

    cin >> n >> m;

    for(int i =0; i<n; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;

        for(int j = x1; j<=x2; j++)
        {
            p[j] = 1;
        }
    }

    int ans = 0;
    vector<int>list;
    for(int i = 1; i<=m ; i++)
    {
        if(p[i] == 0)
        {
            ans++;
            list.push_back(i);
        }
    }

    cout << ans << "\n";

    for(int i =0; i<list.size(); i++)
    {
        cout << list[i] << " ";
    }



}
