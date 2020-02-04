#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string pattern;
    cin >> pattern;
    string patternA;
    string patternB;
    vector<string>ans;

    bool flag = false;
    for(int i =0; i<pattern.size(); i++)
    {
        if(pattern[i] == '*')
        {
            flag = true;
            continue;
        }
        if(flag == false) patternA.push_back(pattern[i]);
        else patternB.push_back(pattern[i]);
    }
    for(int i =0; i<n; i++)
    {
        string str;
        cin >> str;
        int pos = 0;
        int pos2 = 0;
        bool front = true;
        while(1)
        {
            if(pos == str.size())break;
            if(pos2 == patternA.size())break;
            if(str[pos] == patternA[pos2])
            {
                pos++;
                pos2++;
            }
            else
            {
                front = false;
                break;
            }
        }

        bool back = true;
        int temp = str.size() - patternB.size();
        if(pos <= temp)
        {
            pos = temp;
            pos2 = 0;
            while(1)
            {
                if(pos == str.size())
                {
                    if(pos2 != patternB.size())
                    {
                        back = false;
                    }

                    break;
                }
                if(pos2 == patternB.size())break;
                if(str[pos] == patternB[pos2])
                {
                    pos++;
                    pos2++;
                }
                else
                {
                    back = false;
                    break;
                }

            }
        }
        else
        {
            back = false;
        }
        


        if(front && back)
        {
            ans.push_back("DA");
        }
        else
        {
            ans.push_back("NE");
        }

    }

    for(int i= 0; i<ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}
