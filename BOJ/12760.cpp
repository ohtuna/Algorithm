#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;

vector<int>card[105];
int winner[105];

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i =1; i<=n; i++)
    {
        for(int j =0; j<m; j++)
        {
            int temp;
            cin >> temp;
            card[i].push_back(temp);
        }
    }

    for(int i = 1; i<=n; i++)
    {
        sort(card[i].begin(), card[i].end(), greater<int>());
    }
    
    for(int j = 0; j<m; j++)
    {
        int mmax = 0;
        for(int i = 1; i<=n; i++)
        {
            mmax = max(mmax, card[i][j]);
        }

        for(int i =1; i<=n; i++)
        {
            if(mmax == card[i][j])
            {
                winner[i]++;
            }
        }
    }

    int winmax = 0;
    for(int i = 1; i<=n; i++)
    {
        winmax = max(winmax, winner[i]);
    }

    vector<int>ans;
    for(int i =1; i<=n; i++)
    {
        if(winmax == winner[i]) ans.push_back(i);
    }

    for(int x : ans)
    {
        cout << x << " ";
    }
}
