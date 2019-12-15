#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>cake(n+1);
    vector<int>cnt(n+1);

    int p;
    cin >> p;

    int idx = -1;
    int mmax = -1;

    for(int i = 1; i<=p; i++)
    {
        int x, y;
        cin >> x >> y;
        /*if(cake[x-1] != 0 || cake[y+1] !=0)
        {
            for(int j = x; j<=y; j++)
            {
                cake[j] = i;
            }
        }*/
        //else
        //{
            for(int j = x; j<=y; j++)
            {
                if(cake[j] !=0) continue;
                cake[j] = i;
            }
       // }
        
  
        if(mmax == -1 || mmax < (y-x)+1)
        {
            mmax = (y-x)+1;
            idx = i;
        }
    }

    for(int i = 1; i<=n; i++)
    {
        cnt[cake[i]]++;
    }

    int mmax2 = -1;
    int idx2 = -1;
    for(int i = 1; i<=n; i++)
    {
        if(cnt[i] == 0)continue;
        if(mmax2 == -1 || mmax2 < cnt[i])
        {
            mmax2 = cnt[i];
            idx2 = i;
        }
    }

    cout << idx << "\n";
    cout << idx2 << "\n";
}
