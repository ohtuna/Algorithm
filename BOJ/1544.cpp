#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string>s_list;

    for(int i = 0; i<n; i++)
    {
        string temp;
        cin >> temp;
        s_list.push_back(temp);
    }

    for(int i =0; i<n; i++)
    {
        string c_temp1 = s_list[i];
        if(c_temp1 == "")continue;
        for(int j = 0; j<n; j++)
        {
            if(i==j) continue;
            string c_temp2 = s_list[j];
            if(c_temp2 == "")continue;
            if(c_temp1.size() == c_temp2.size())
            {
                //단어 위치 같은 단어 
                int start = 0;
                
                while(start < c_temp1.size())
                {
                    int s1_cnt = 0;
                    int s2_cnt = start;
                    while(s1_cnt < c_temp1.size())
                    {
                        if(c_temp1[s1_cnt] == c_temp2[s2_cnt % c_temp1.size()])
                        {
                            s1_cnt++;
                            s2_cnt++;
                            continue;
                        }
                        else break;
                    }
                    if(s1_cnt == c_temp1.size())
                    {
                        s_list[j] = "";
                        break;
                    }
                    start++;

                }
            }
        }
    }
    int ans = 0;
    for(int i =0; i<n; i++)
    {
        if(s_list[i] != "") ans++;
    }

    cout << ans;
}
