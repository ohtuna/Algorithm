#include<iostream>
#include<deque>
#include<cstdio>
#include<string>
#include<vector>
#include<string.h>

using namespace std;



int main()
{
    cin.tie();
    int n;
    cin >> n;

    vector<int>dq;

    int idx = 0;
    for(int i =0 ; i<n; i++)
    {
        char cmd[6];
        scanf("%s", cmd);
        int x;
        

        if(strcmp(cmd, "push") == 0)
        {
            scanf("%d", &x);
            dq.push_back(x);
        }
        else if(strcmp(cmd, "pop") == 0)
        {
            if(idx == dq.size())
            {
                cout << -1 << "\n";
                continue;
            }
            x = dq[idx];
            idx++;
            cout << x << "\n";
        }
        else if(strcmp(cmd, "size") == 0)
        {
            cout << dq.size() - idx << "\n";
        }
        else if(strcmp(cmd, "empty") == 0)
        {
            if(idx == dq.size())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if(strcmp(cmd, "front") == 0)
        {
            if(idx == dq.size())
            {
                cout << -1 << "\n";
                continue;
            }
            cout << dq[idx] << "\n";
        }
        else if(strcmp(cmd, "back") == 0)
        {
            if(idx == dq.size())
            {
                cout << -1 << "\n";
                continue;
            }
            cout << dq.back() << "\n"; 
        }
    }
}
