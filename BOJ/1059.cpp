#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int l;

    cin >> l;

    vector<int>a(l);

    for(int i =0; i<l; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int N;
    cin >> N;
    int small = 1;
    int large = 0;
    for(int i =0; i<l; i++)
    {
        if(N <= a[i])
        {
            large = a[i];
            break;
        }
        small = a[i] + 1;
    }

    int cnt = 0;
    for(int i = small; i<large; i++)
    {
        for(int j = i+1; j<large; j++)
        {
            if(i<=N && N<=j)
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    

}
