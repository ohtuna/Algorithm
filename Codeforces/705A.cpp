#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    string s1 = "I hate it";
    string s2 = "I love it";
    string s3 = "I hate";
    string s4 = "I love";

    cin >> n;
    string ans ="";
    for(int i = 1; i<=n; i++)
    {
        if(i<=n-1)
        {
            if(i%2 == 1)
            {
                ans += s3;
                ans += " that ";
            }
            else
            {
                ans +=s4;
                ans += " that ";
            }
            
        }
        else
        {
             if(i%2 == 1)
            {
                ans += s1;
            }
            else
            {
                ans +=s2;
            }
        }
    }

    cout << ans;



}
