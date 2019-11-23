#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int tc;

    cin >>tc;
    cin.ignore();


    while(tc--)
    {
        vector<string>fox;
        string str;
        getline(cin, str);
        string temp;
        for(int i= 0; i<str.size(); i++)
        {
            if(str[i] == ' ')
            {   
                fox.push_back(temp);
                temp ="";
                continue;
            }
            temp.push_back(str[i]);
        }
        fox.push_back(temp);

        while(1)
        {
            str="";
            getline(cin, str);
            if(str[str.size() -1] == '?')break;
            int cnt = 0;
            string sound = "";
            for(int i = 0; i<str.size(); i++)
            {
                if(cnt == 2)
                {
                    sound.push_back(str[i]);
                }
                if(str[i] == ' ') cnt++;
           
            }

            for(int  i=0; i<fox.size(); i++)
            {
                if(fox[i] == sound)
                {
                    fox[i] = "0";
                }
            }

        }

        for(int i=0; i<fox.size(); i++)
        {
            if(fox[i] == "0")continue;
            cout << fox[i] << " ";
        }
        cout <<"\n";
    }

         

}
