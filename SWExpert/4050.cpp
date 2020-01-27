#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int arr[100000];

int main()
{
    int tc;
    cin >> tc;

    for(int t = 1; t<=tc; t++)
    {
        int n;
        cin >> n;

        for(int i =0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+n);
        long long temp = 0;
        long long  sum = 0;
        long long  cnt = 0;
        for(int i = n-1; i>=0; i--)
        {
            cnt++;
            temp+=arr[i];
            if(cnt == 3)
            {
                temp-=arr[i];
                sum+=temp;
                cnt = 0;
                temp = 0;
            }
        }
        sum += temp;

        cout << "#" << t << " " << sum << "\n";
    }   
}
