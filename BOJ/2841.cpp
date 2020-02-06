#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

stack<int>st[8];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, p;

    cin >> n >> p;

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        
        if(st[x].empty())
        {
            ans++;
            st[x].push(y);
        }
        else
        {
            if(st[x].top() < y)
            {
                ans++;
                st[x].push(y);
            }
            else if(st[x].top()==y) continue;
            else
            {
                while(!st[x].empty() && st[x].top() > y)
                {
                    st[x].pop();
                    ans++;
                }
                if(st[x].empty())
                {
                    st[x].push(y);
                    ans++;
                }
                else if(st[x].top() == y)continue;
                else
                {
                    st[x].push(y);
                    ans++;
                }
                

            }
            
        }

    }

    cout << ans;
}
