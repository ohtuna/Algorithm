#include<iostream>
#include<string>

using namespace std;

int main()
{
    while(1)
    {
        string s;

        cin >> s;

        if(s == "end")break;

        bool impossible = false;
        bool checkmo = false;
        bool checkja = false;
        int mo = 0;
        int ja = 0;

        for(int i =0; i<s.size(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                checkmo = true;
                ja = 0;
                mo++;
            }
            else
            {
                mo = 0;
                ja++;
            }
            if(mo >= 3 || ja >=3)
            {
                impossible = true;
                break;
            }
            if(i > 0 && (s[i] == s[i-1]))
            {
                if(s[i] == 'o' || s[i] == 'e')continue;
                impossible = true;
                break;
            }
        }


        if(impossible == false && checkmo == true)
        {
            cout << "<" << s << "> is acceptable." << "\n";
        }
        else
        {
            cout << "<" << s << "> is not acceptable." << "\n";
        }
        

    }
}
