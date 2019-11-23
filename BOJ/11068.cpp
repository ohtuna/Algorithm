#include<iostream>
#include<string>
#include<algorithm>
#include<memory.h>
#include<vector>

using namespace std;


int main()
{
    int tc;

    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
        int n;
        cin >> n;
        bool flag = false;

        for(int i=2; i<=64; i++)
        {
            vector<int>arr;

            int temp = n;

            while(temp != 0)
            {
                arr.push_back(temp%i);
                temp /=i;
            }
            vector<int>copyarr = arr;
            reverse(copyarr.begin(), copyarr.end());

            flag =  equal(arr.begin(), arr.end(), copyarr.begin(), copyarr.end());
            if(flag == false)continue;
            else break;
        }

        if(flag ==false)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
}
