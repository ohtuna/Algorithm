#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int k, n;

    cin >> k >> n;

    vector<long long>lan(k);

    for(int i = 0; i<k; i++)
    {
        cin >> lan[i];
    }

    long long left = 1;
    long long right = 4294967296;
    long long ans = 0;

    while(left <= right)
    {
        long long mid = (left+right)/2;
        int sum = 0;
        for(int i = 0; i<k; i++)
        {
            sum += lan[i]/mid;            
        }
        if(sum < n)
        {
            right = mid -1;
        }
        else
        {
            left = mid +1;
        }
        
    }

    cout << right;




}
