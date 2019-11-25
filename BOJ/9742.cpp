#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string copystr;
    string str;
    while(cin >> str)
    {   
        
        bool flag = false;
        int cnt =0;
        flag= false;
        cin >> cnt;

            copystr = str;
        

         int curcnt = 1;
         do
         {  
             if(curcnt == cnt)
             {
                 flag = true;
                 break;
             }
             curcnt++;
         } while (next_permutation(str.begin(), str.end()));

         if(flag == true)
         {
             cout << copystr << " " << cnt << " " << "=" << " " << str;
         }
         else
         {
              cout << copystr << " " << cnt << " " << "=" << " " << "No permutation";
         }
         cout << "\n";
    
    }

    
}
