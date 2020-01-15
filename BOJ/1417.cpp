#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int a[10001];

int main()
{
    int n;
    cin >> n;



    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    int cnt =0;
    sort(a+1, a+n); 
    if(n==1)
    {
        cout << 0;
        return 0;
    }
    while(1)
    {
        if(a[0] > a[n-1])break;

        
        if(a[n-1] == a[n-2])
        {
            a[0]++;
            a[n-1]--;
            cnt+=1;
        }
        else
        {
            int temp = a[n-1] - a[n-2];
            for(int i = 1; i<=temp; i++)
            {
                cnt++;
                a[0]++;
                a[n-1]--;
                if(a[0] > a[n-1])break;
            }
        }
        
        
        sort(a+1, a+n);
    }

    cout << cnt;
}
