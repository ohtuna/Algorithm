#include<iostream>
#include<string>
#include<memory>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i<n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int ans = 0;
        int pos1 = 0;
        int pos2 = 0;
        while(1)
        {
            bool flag = false;
            if(pos1 == s1.size() || pos2 == s2.size()) break;

            if(s1[pos1] == s2[pos2])
            {
                pos1++;
                pos2++;
                continue;
            }
            if(s1[pos1] != s2[pos2])
            {
                for(int j = pos1 + 1; j<s1.size(); j++)
                {
                    if(s1[j] == s2[j]) continue;
                    else if(s1[j] == s2[pos2])
                    {
                        ans++;
                        swap(s1[pos1], s1[j]);
                        flag = true;
                        break;
                    }
                }
            }
            if(flag == false)break;
        }

        if(s1 == s2)
        {
            cout << ans << "\n";
        }
        else
        {
            for(int j = 0; j<s1.size(); j++)
            {
                if(s1[j] == s2[j])continue;
                else
                {
                    s1[j] = s2[j];
                    ans++;
                }
            }

            cout << ans  << "\n";
        }
        


    }
}
