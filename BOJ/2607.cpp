#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int n;
int ans;

string originword;

int main()
{

    cin >> n;
    
    cin >> originword;

    for(int i=1; i<n; i++)
    {
        string tempword = originword;
        string compareword;
        cin >> compareword;

        for(int j = 0; j<tempword.size(); j++)
        {
            for(int k = 0; k<compareword.size(); k++)
            {
                if(tempword[j] == compareword[k])
                {
                    tempword[j] = '+';
                    compareword[k] = '+';
                    break;
                }
            }
        }

        int cnt1 =0;
        int cnt2 =0;
        for(int j = 0; j<tempword.size(); j++)
        {
            if(tempword[j] != '+')cnt1++;
        }
        for(int j =0; j<compareword.size(); j++)
        {
            if(compareword[j] != '+')cnt2++;
        }
        
        if(cnt1 >= 2)continue;
        if(cnt2 >= 2)continue;
        if(abs(cnt1 - cnt2) <= 1) ans++;
    }   
    cout << ans;
    
}
