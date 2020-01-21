#include<iostream>
#include<string>

using namespace std;

char keyboard[200] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
                      'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
                      'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
                      'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};

int main()
{
    string str;
    while(getline(cin, str))
    {
        for(int i =0; i<str.size(); i++)
        {
        if(str[i] == ' ' || str[i] == 'Q' || str[i] == 'A' || str[i] == 'Z' || str[i] == '`')continue;
        for(int j = 0; j<47; j++)
        {
            if(str[i] == keyboard[j])
            {
                str[i] = keyboard[j-1];
                break;
            }
        }
    }

    cout << str << "\n";
    }
    


}
