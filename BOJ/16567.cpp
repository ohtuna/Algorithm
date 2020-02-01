#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int>a(n+2);

    int ans = 0;
    for(int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1; i<=n; i++)
    {
        if(a[i] == 1)
        {
            cnt++;
            continue;
        }
        else
        {
            if(cnt > 0)
            {
                ans++;
            }
            cnt = 0;
            
        }
    }
    if(cnt > 0)
    {
        ans ++;
    }

    
    for(int i = 0; i <m; i++)
    {
        int cmd;
        cin >> cmd;
        if(cmd == 1)
        {
            int bit;
            cin >> bit;
            if(bit == 1)
            {
                if(a[bit] == 0 && a[bit+1] == 0)
                {
                    a[bit] = 1;
                    ans++;
                }
                else
                {
                    a[bit] = 1;
                }
            }
            else if(bit == n)
            {
                if(a[bit] == 0 && a[bit-1] == 0)
                {
                    a[bit] = 1;
                    ans++;
                }
                else
                {
                    a[bit] = 1;
                }
                
            }
            if(a[bit - 1] == 0 && a[bit + 1] == 0 && a[bit] == 0)
            {
                a[bit] = 1;
                ans++;
            }
            else if(a[bit-1] == 1 && a[bit+1] == 1 && a[bit] == 0)
            {
                a[bit] = 1;
                ans--;
            }
            else
            {
                a[bit]=1;
            }
            
            
        }
        

        if(cmd == 0)
        {
            cout << ans << "\n";
        }
    }
}
