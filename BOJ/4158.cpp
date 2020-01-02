#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<cstdio>

using namespace std;



int main()
{
    while(1)
    {
        int n, m;
 
        scanf("%d %d", &n, &m);
        vector<int>a(n);
        vector<int>b(m);
        if(n ==0  && m == 0)break;
        for(int i =0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i =0; i<m; i++)
        {
            scanf("%d", &b[i]);
        }

        int l1 = 0;
        int l2 = 0;
        int ans = 0;
        while(1)
        {
            if(l1== a.size())break;
            if(l2 == b.size())break;
            if(a[l1] == b[l2])
            {
                l1++;
                l2++;
                ans++;
            }
            else if(a[l1] < b[l2])
            {
                l1++;
            }
            else
            {
                l2++;
            }
            
        }

        printf("%d\n", ans);
    }


    
}
