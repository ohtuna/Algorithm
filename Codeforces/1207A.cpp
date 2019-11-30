#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int q;
    cin >> q;

    for(int i =0; i<q; i++)
    {
        int b, p,f, h,c;

        cin >> b >> p >> f >> h >> c;

        b/=2;

        if(b==0)
        {
            cout << "0" << "\n";
        }
        else
        {
            int beef = 0;
            int chicken = 0;
            if(h >= c)
            {
                while(p > 0)
                {
                    if(b==0)break;
                    p--;
                    b--;
                    beef++;
                }
                while(f > 0)
                {
                    if(b==0)break;
                    f--;
                    b--;
                    chicken++;
                }
            }
            else
            {
                while(f > 0)
                {
                    if(b==0)break;
                    f--;
                    b--;
                    chicken++;
                }
                 while(p > 0)
                {
                    if(b==0)break;
                    p--;
                    b--;
                    beef++;
                }   
            }

           cout << beef * h + chicken * c << "\n";  
        }
    }
}
