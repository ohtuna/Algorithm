#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, v;
    cin >> n >> m >> v;

    vector<int>node(n+1);
    for(int i =1; i<=n; i++)
    {
        cin >> node[i];
    }

    //node 총 갯수
    int start = 1;
    int mod = n+1 - v;
    for(int i = 0; i<m; i++)
    {
        int k;
        cin >> k;
        if(k + 1<=v)
        {
            cout << node[k+1] << "\n";
        }
        else
        {   
            int loc = (k- (v-2)) % mod;
            if(loc == 0)
            {
                cout << node[n] << "\n";
            }
            else
            {
                cout << node[v+loc-1] << "\n";
            }
            
        }
    }
}
