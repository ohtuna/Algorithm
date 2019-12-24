    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<math.h>

    using namespace std;

    int main()
    {
        int n, m;

        cin >> n >> m;

        vector<pair<int,int>>a;
        vector<pair<int,int>>b;

        for(int i =0; i<n; i++)
        {
            int d,v;
            cin >> d >> v;
            a.push_back({d,v});
        }
        for(int i =0; i<m; i++)
        {
            int d,v;
            cin >> d >> v;
            b.push_back({d,v});
        }

        int idxA = 0;
        int idxB = 0;

        int distA = 0;
        int distB = 0;

        int ans = 0;

        while(1)
        {
            if(distA == 100 && distB == 100)break;  
            if(distA == 0 && distB == 0)
            {
                distA += a[idxA].first;
                distB += b[idxB].first;
                continue;
            }
            if(distA-distB == 0)
            {
                if(a[idxA].second < b[idxB].second)
                {
                    ans = max(ans, b[idxB].second - a[idxA].second);
                }
                if(distA < 100)
                {
                    distA += a[++idxA].first;
                }
                if(distB < 100)
                {
                    distB += b[++idxB].first;
                }
                
                
            }
            else if(distA > distB)
            {
                if(a[idxA].second < b[idxB].second)
                {
                    ans = max(ans, b[idxB].second - a[idxA].second);
                }
                distB += b[++idxB].first;
            }
            else
            {
                if(a[idxA].second < b[idxB].second)
                {
                    ans = max(ans, b[idxB].second - a[idxA].second);
                }
    
                while(distA < distB)
                {
                    if(a[idxA].second < b[idxB].second)
                    {
                        ans = max(ans, b[idxB].second - a[idxA].second);
                    }
                    distA += a[++idxA].first;
                   
                }
                

            }
            
        }
        if(a[idxA].second < b[idxB].second)
        {
            ans = max(ans, b[idxB].second - a[idxA].second);
        }

        cout << ans;


    }
