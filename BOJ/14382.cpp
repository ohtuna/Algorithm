#include<iostream>
#include<string>

using namespace std;

int main()
{
    int c;
    cin >> c; 
    for(int tc = 1; tc<=c; tc++)
    {   
        int check[10] = {0, };
        int n;
        cin >> n;

        int temp = n;
        int mult = 1;
        bool flag = true;
        int ans;
        while(temp * mult <= 10000000)
        {
            
            if(temp == 0)
            {
                flag = false;
                break;
            }
            flag = true;
            string s = to_string(temp*mult);
            for(int i = 0; i<s.size(); i++)
            {
                check[s[i] -'0'] = 1;
            }

            for(int i =0; i<10; i++)
            {
                if(check[i] == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag == true)
            {
                ans = temp * mult;
                break;
            }
            mult++;

        }


        if(flag == true)
        {
            cout << "Case #"<<tc<<": " << ans << "\n";
        }
        else
        {
            cout << "Case #"<<tc<<": " << "INSOMNIA" << "\n";           
        }
        
    }
}
