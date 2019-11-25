#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
    vector<string>ans;
    int n;
    while(1)
    {
        cin >> n;
        if(n==0)break;

        vector<string>temp1;
        vector<string>temp2;
        string str;    
        for(int i =0; i<n; i++)
        {
            cin >> str;
            if(n%2==0)
            {
                if(i < n/2)
                {
                    temp1.push_back(str);
                }
                else
                {
                    temp2.push_back(str);
                }
            }
            else
            {
                if(i<n/2+1)
                {
                    temp1.push_back(str);
                }
                else
                {
                    temp2.push_back(str);
                }
            }
        }

        for(int i =0; i<temp2.size(); i++)
        {
           ans.push_back(temp1[i]);
           ans.push_back(temp2[i]);
        }
        if(n%2==1)
        {
            ans.push_back(temp1[temp1.size()-1]);
        }
    }

    //여기에서 셔플 돌리면 됨.

    for(int i =0; i<ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}
