#include<iostream>
#include<algorithm>

using namespace std;

int p[200][3];
int ans[200][3];

int main()
{
    int n;
    cin >> n;

    for(int i =0; i<n; i++)
    {
        for(int j =0; j<3; j++)
        {
            cin >> p[i][j];
        }
    }
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<3; j++)
        {
            ans[i][j] = -1;
        }
    }

    for(int i =0; i<3; i++)
    {
        
        for(int j = 0; j<n; j++)
        {
            bool flag = false;
            if(ans[j][i] > -1) continue;
            for(int k=j+1; k<n; k++)
            {
                if(p[j][i] == p[k][i])
                {
                    flag = true;
                    ans[j][i] = 0;
                    ans[k][i] = 0;
                }
            }

            if(flag == false)
            {
                ans[j][i] = p[j][i];
            }
        }
    }


    for(int i = 0; i<n; i++)
    {
        int sum  = 0;
        for(int j =0; j<3; j++)
        {
            sum += ans[i][j];
        }
        cout << sum << "\n";
    }

    

}
