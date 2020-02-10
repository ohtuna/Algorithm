#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;


int ccmp(string a, string b)
{
    if(a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else if(a.size() == b.size())
    {
        return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
    }
 
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

int main()
{
    
    int n;
    cin >> n;

    vector<string>ans;
    for(int i = 0; i<n; i++)
    {
        string str;
        cin >> str;

        string temp;
        for(int j =0 ; j<str.size(); j++)
        {
            if(str[j] >= '0' && str[j] <='9')
            {
                temp.push_back(str[j]);
            }
            else
            {
                //check
                if(temp == "") continue;
                if(temp[0] == '0' && temp.size() > 1)
                {
                    string copytemp = "";
                    int start = -1;
                    for(int k =0; k<temp.size(); k++)
                    {   
                        if(temp[k] != '0')
                        {
                            start = k;
                            break;
                        }
                    }
                    for(int k = start; k<temp.size(); k++)
                    {
                        copytemp.push_back(temp[k]);
                    }
                    if(start == -1)
                    {
                        ans.push_back("0");
                    }
                    else
                    {
                        ans.push_back(copytemp);
                    }
                    temp="";
                }
                else
                {   
                    ans.push_back(temp);
                    temp ="";
                }
            }
        }
        if(temp.size()>0)
        {
                if(temp.size()>1)
                {
                    string copytemp = "";
                    int start = -1;
                    for(int k =0; k<temp.size(); k++)
                    {   
                        if(temp[k] != '0')
                        {
                            start = k;
                            break;
                        }
                    }
                    for(int k = start; k<temp.size(); k++)
                    {
                        copytemp.push_back(temp[k]);
                    }
                    if(start == -1)
                    {
                        ans.push_back("0");
                    }
                    else
                    {
                        ans.push_back(copytemp);
                    }
                    temp="";
                }
                else
                {   
                    ans.push_back(temp);
                    temp ="";
                }
        }
    }

    sort(ans.begin(), ans.end(), ccmp);
    for(auto a : ans)
    {
        cout << a << "\n";
    }
}
