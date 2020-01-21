#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    vector<int>arr(n);
    map<int,int>m;

    double sum = 0.0;
    int mmax = -2100000000;
    int mmin = 2100000000;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
        m[arr[i]]++;
        mmax = max(mmax, arr[i]);
        mmin = min(mmin, arr[i]);
    }

    map<int,int>::iterator it = m.begin();
    int cnt = -1;
    vector<int>freq;
    while(it != m.end())
    {
        if(cnt == -1)
        {
           cnt = it->second;
           freq.push_back(it->first);
        }
        else if(cnt == it->second)
        {
            freq.push_back(it->first);
        }
        else if(cnt < it->second)
        {
            freq.clear();
            freq.push_back(it->first);
            cnt = it->second;
        }
        
        it++;
    }
    int freqnum = 0;
    if(freq.size() == 1)
    {
        freqnum = freq[0];
    }
    else
    {
        freqnum = freq[1];
    }
    
    sort(arr.begin(), arr.end());
    printf("%.0f\n", (double)sum / (double)n);
    printf("%d\n", arr[n/2]);
    printf("%d\n", freqnum);
    printf("%d\n", mmax - mmin);
    

}
