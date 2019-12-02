#include<iostream>
#include<vector>

using namespace std;


int gcd(int a, int b)
{
    if(b == 0)return a;
    return gcd(b, a%b);
}
int main()
{
    int n;

    cin >> n;
    vector<int>a(n);


    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }
    int g = 0;
    if(n== 2)
    {
        g = gcd(a[0], a[1]);
    }
    if(n==3)
    {
        g = gcd(a[0], a[1]);
        g = gcd(g , a[2]);
    }

    vector<int>ans;
    if(n == 2)
    {
        for(int i=1; i<=g; i++)
        {
            if(a[0] % i == 0 && a[1] % i ==0)
            {
             ans.push_back(i);
            }
        }
    }
    else if(n==3)
    {
        for(int i=1; i<=g; i++)
        {
            if(a[0] % i == 0 && a[1] % i == 0 && a[2] % i ==0)
            {
             ans.push_back(i);
            }
        }
    }
    
    for(int i =0; i<ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }

    
}
