#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, c;
    cin >> n >> c;

    vector<int>a(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int left = 1;
    int right = 1000000000;

    //공유기 갯수
    while(left <=right)
    {
        int mid = (left+right) /2;
        int cnt = 1;
        int start = a[0];
        for(int i =1;i<n; i++)
        {
            if(start + mid <= a[i])
            {
                cnt++;
                start = a[i];
            }
        }

        if(cnt < c)
        {
            right= mid-1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << right;

}
