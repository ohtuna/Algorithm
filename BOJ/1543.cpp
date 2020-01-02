#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);


    if(s1.size() < s2.size())
    {
        cout << 0;
        return 0;
    }
    int start = 0;
    int ans = 0;
    for(int i =0 ; i<s1.size()-s2.size()+1; i++)
    {
        bool flag = true;
        for(int j = 0; j<s2.size(); j++)
        {
            if(s1[i+j]!=s2[j])
            {
                flag = false;
            }
        }
        if(flag == true)
        {
            ans++;
            i+= s2.size()-1;
        }
    }

    cout << ans;
}
