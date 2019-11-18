#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

int tc;
int n, l;

int main()
{
    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
        cin >> n >> l;
        vector<int>list(n);

        for(int i = 0; i < n; i++)
        {
            cin >> list[i];
        }
        double ans = -1.0;
        // 0번에서 n-l번 index 까지.. 합 더해야함...
        for(int i = l; i <= n; i++)
        {
            int start = 0;
            while(start < n)
            {
                if(start + i > n)break;
                double sum = 0.0;
                for(int j = start; j<start+i; j++)
                {
                    sum += list[j];
                } 
                sum /= i;
                if(ans == -1.0 || ans > sum)
                {
                    ans = sum;
                }
                start++;
            }
        }
        
        printf("%.12lf\n", ans);

    }
}
