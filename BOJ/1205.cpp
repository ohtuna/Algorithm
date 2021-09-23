#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    int p;
    int score;

    cin >> n >> score >> p;


    vector<int>arr;

    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;

        arr.push_back(x);
    }

    arr.push_back(score);

    sort(arr.begin(), arr.end());

    int ranking = 0;
    int temp = 0;
    int cnt = 0;
    for(int i = arr.size()-1; i>=0; i--)
    {
        if(temp == 0)
        {
            temp = arr[i];
            ranking++;
            cnt++;
        }
        else if(temp > arr[i])
        {
            temp = arr[i];
            ranking++;
            cnt++;
        }
        else if(temp == arr[i])
        {
            ranking++;
            cnt++;
            continue;
        }
        if(arr[i] == score)
        {
            if(i>0)
            {
                for(int j = i-1; j>=0; j--)
                {
                    if(arr[j] == score)
                    {
                        cnt++;
                    }
                    else break;
                }
            }
            break;
        }
    }

    if(p >=cnt)
    {
        cout << ranking;
    }
    else
    {
        cout << -1;
    }




}
