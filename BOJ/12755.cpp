#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[10] = {9, 90, 900, 9000, 90000, 900000, 9000000, 90000000};
    int startlist[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};

    int sum = 0;
    int cnt = 1;
    int idx = 0;
    
    while(1)
    {
        sum += arr[idx] * cnt;
        if(n- sum <= 0)break;
        cnt++;
        idx++;
    }
    //start
    sum = 0;
    cnt = 1;
    for(int i = 0; i<idx; i++)
    {
        sum += arr[i] * cnt;
        cnt++;
    }

    string s;
    for(int i = startlist[idx]; ; i++)
    {
        s = to_string(i);
        if(s.size() + sum < n)
        {
            sum += s.size();
        }
        else break;
    }

    cout << s[n-sum-1];
}
