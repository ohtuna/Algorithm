#include<iostream>
#include<string>
#include<vector>

using namespace std;

char map[31][31];
char copymap[31][31];

string s1;
string s2;

void Initmap()
{
    for(int i=0; i<30; i++)
    {
        for(int j=0; j<30; j++)
        {
            map[i][j] = '.';
        }
    }
}

void Copymap()
{
    for(int i =0; i<30; i++)
    {
        for(int j = 0; j<30; j++)
        {
            copymap[i][j] = map[i][j];
        }
    }
}

bool Checkmap(int startA)
{
    
    string cmp1;
    string cmp2;

    for(int i = startA; i<s2.size(); i++)
    {
        string temp1;
        for(int j =0; j<s1.size(); j++)
        {
            if(copymap[i][j] == '.')continue;
            temp1.push_back(copymap[i][j]);
        }
        if(temp1.size() == s1.size())
        {
            cmp1 = temp1;
            break;
        }
    }

    for(int i =0; i<s1.size(); i++)
    {
        string temp2;
        for(int j =0; j<s2.size(); j++)
        {
            if(copymap[j][i] == '.') continue;
            temp2.push_back(copymap[j][i]);
        }
        if(temp2.size() == s2.size())
        {
            cmp2 = temp2;
            break;
        }
    }

    if(cmp1 == s1 && cmp2 == s2) return true;

    return false;
}

int main()
{

    cin >> s1 >> s2;

    for(int i = 0; i<s1.size(); i++)
    {
        Initmap();
        for(int j = 0; j<s2.size(); j++)
        {
            map[j][i] = s2[j];
        }
        

        for(int j = 0; j<s2.size(); j++)
        {
            Copymap();
            for(int k = 0; k<s1.size(); k++)
            {
                copymap[j][k] = s1[k];
            }
            if(Checkmap(j) == true)
            {
                for(int i =0; i<s2.size(); i++)
                {
                    for(int j =0; j<s1.size(); j++)
                    {
                        cout << copymap[i][j]; 
                    }
                    cout << "\n";
                }
                return 0;
            }
        }
    }

}
