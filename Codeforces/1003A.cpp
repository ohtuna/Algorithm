#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool used[101][101];

int main()
{
    int n;

    cin >> n;
    vector<int>coin(n);
    for(int i =0; i<n; i++)
    {
        cin >> coin[i];
    }

    int ans = 0;
    sort(coin.begin(), coin.end());
    for(int i =0; i<coin.size(); i++)
    {
        for(int j = 0; j<100; j++)
        {
            if(used[j][coin[i]] == 0)
            {
                used[j][coin[i]] = true;
                break;
            }
            else continue;
        }
    }

    int cnt = 0;
    for(int i = 0; i<100; i++)
    {
        for(int j =0; j<=100; j++)
        {
            if(used[i][j] == true)
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;

    

}
