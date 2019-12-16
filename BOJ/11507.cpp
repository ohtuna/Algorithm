#include<iostream>
#include<string>

using namespace std;

int a[4][14];

int main()
{
    string s;

    cin >> s;

    bool f = true;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i] == 'P' || s[i] == 'K' || s[i] == 'H' || s[i] == 'T')
        {
            string temp;
            temp.push_back(s[i+1]);
            temp.push_back(s[i+2]);
            int index = stoi(temp);
            if(s[i] == 'P')
            {
                if(a[0][index] == 0)
                {
                    a[0][index]++;
                }
                else
                {
                    f=false;
                }
            }
            else if(s[i] == 'K')
            {
                if(a[1][index] == 0)
                {
                    a[1][index]++;
                }
                else
                {
                    f=false;
                }
            }
            else if(s[i] == 'H')
            {
                if(a[2][index] == 0)
                {
                    a[2][index]++;
                }
                else
                {
                    f=false;
                }
            }
            else if(s[i] == 'T')
            {
                if(a[3][index] == 0)
                {
                    a[3][index]++;
                }
                else
                {
                    f=false;
                }
            }
            
        }
    }  
    if(f== false)
    {
        cout << "GRESKA";
        return 0;
    }

    for(int i =0; i<4; i++)
    {
        int cnt = 0;
        for(int j =1; j<=13; j++)
        {
            if(a[i][j] == 1) cnt++;
        }

        cout << 13-cnt << " ";
    }
}
