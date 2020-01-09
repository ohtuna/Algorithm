    #include<iostream>
    #include<queue>
    #include<vector>
    #include<memory.h>

    using namespace std;

    int n;
    int visit[10001];
    int s, e;


    int main()
    {
        cin >> n;
        
        vector<int>a(n + 1);

        for(int i = 1; i<=n; i++)
        {
            cin >> a[i];
        }

        memset(visit, -1, sizeof(visit));

        cin >> s >> e;

        queue<pair<int,int>>q;
        q.push({s,0});
        visit[s] = 0;
        
        while(!q.empty())
        {
            int cur = q.front().first;
            int m = q.front().second;
            q.pop();

            int temp = a[cur];
            while(cur + temp <= n )
            {
                if(visit[cur+temp] == -1 || visit[cur + temp] > m +1)
                {
                    visit[cur+temp]= m+1;
                    q.push({cur+temp, m+1});
                }
                temp += a[cur];   
            }
            temp = a[cur];
            while(cur - temp >= 1)
            {
                if(visit[cur-temp] == -1 || visit[cur - temp] > m + 1)
                {
                    visit[cur-temp] = m + 1;
                    q.push({cur-temp, m+1});
                }
                temp += a[cur];
            }
        }
        if(visit[e] == -1)
        {
            cout << -1;
        }
        else
        {
            cout << visit[e];
        }
        
    }   
