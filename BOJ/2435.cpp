#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int>arr;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int left = 0;
    int right =0;
    int sum = 0;
    int ans = -999999999;

    while(left < n)
    {
        if(right - left < k)
        {
            sum += arr[right];
            right++;
            if(right > n)break;
        }
        else
        {
            ans = max(ans,sum);
            sum -= arr[left];


            left++;
        }
    }

    cout << ans;


}
