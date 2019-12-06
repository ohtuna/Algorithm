#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>ans(n);

    for(int i =0; i<n; i++)
    {
        cin >> ans[i];
    }


    for(int i =0; i<n; i++)
    {
        if(ans[i]%2 == 0)
        {
            cout << ans[i] -1 << " ";
        }
        else
        {
            cout << ans[i] << " ";
        }
        
    }
}
