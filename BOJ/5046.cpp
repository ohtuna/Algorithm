#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n, b, h, w;
    cin >> n >> b >> h >> w;
    int ans = 0;
    for(int i =0; i<h; i++)
    {
        int p;
        cin >> p;
        vector<int>person(w);
        for(int j =0; j<w; j++)
        {
            cin >> person[j];
        }
        for(int j = 0; j<w; j++)
        {
            if(n<=person[j])
            {
                if(n*p <= b)
                {
                    if(ans == 0 || ans > n*p)
                    {
                        ans = n*p;
                    }
                }
            }
        }
    }
    if(ans == 0)
    {
        cout << "stay home";
    }
    else
    {
        cout << ans;
    }
    
}
