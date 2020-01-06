#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

char ans[101][101];

int main()
{
    int n, m;
    int u, l, r, d;

    cin >> n >> m;

    cin >> u >> l >> r >> d;

    vector<string>word(n);

    for(int i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    for(int i =0; i<n+d+u; i++)
    {
        for(int j =0; j<m+l+r; j++)
        {
            ans[i][j] = '.';
        }
    }

    //make
    
    int idx = 0;
    for(int i = u; i< u+n; i++)
    {
        int idx2 = 0;
        for(int j = l; j<l+m; j++)
        {
            ans[i][j] = word[idx][idx2];
            idx2++;
        }
        idx++;
    }

    for(int i = 0; i<n+u+d; i++)
    {
        for(int j = 0; j<m+r+l; j++)
        {
            if(i%2 == 0 && j%2 ==0)
            {
                if(ans[i][j] == '.')
                {
                    ans[i][j] = '#';
                }
            }
            else if(i%2 == 1 && j %2 == 1)
            {
                if(ans[i][j]== '.')
                {
                    ans[i][j] = '#';
                }
            }
            
        }
    }

    for(int i =0; i<n+d+u; i++)
    {
        for(int j =0; j<m+l+r; j++)
        {
            cout << ans[i][j];
        }
        cout << "\n";
    }


}
