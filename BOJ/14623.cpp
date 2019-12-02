#include<iostream>
#include<string>

using namespace std;

int main()
{
   string bit1;
   string bit2;

   long long a = 0;
   long long b = 0;

   cin >> bit1 >> bit2;

   int  mult = 1;
   for(int i = bit1.size()-1; i>=0; i--)
   {
       if(bit1[i] == '1')
       {
           a += (bit1[i]-'0') * mult;
       }
       
       mult *=2;
   }
   mult = 1;
   for(int i = bit2.size()-1; i>=0; i--)
   {
        if(bit2[i] == '1')
       {
           b += (bit2[i]-'0') * mult;
       }
       mult*=2;
   }

   long long temp = a*b;

    string ans;

    while(temp > 0)
    {
        ans.push_back((temp%2) + '0');
        temp/=2;
    }

    for(int i = ans.size()-1; i>=0; i--)
    {
        cout << ans[i];
    }

}
