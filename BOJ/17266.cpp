#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n; //total dist;
    int c;
    cin >> n >> c;

    vector<int>a(c);

    for(int i = 0; i <c ; i++)
    {
        cin >> a[i];
    }


    int ans = 0;
    for(int i = 1; i<a.size(); i++)
    {
        ans = max(ans, (a[i]-a[i-1]+1)/2);
    }

    if(a[0] - ans <= 0 && a[a.size()-1] + ans >=n)
    {
        cout << ans;
    }
    else
    {
        ans = max(a[0] - 0, n-(a[a.size()-1]));
        cout << ans;
    }
    



    
}
