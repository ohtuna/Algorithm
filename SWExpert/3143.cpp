#include<iostream>
#include<string>

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for(int t=1; t<=tc; t++)
    {
        string a, b;
        cin >> a >> b;

        int pos = 0;
        int pos2 = 0;
        int total = 0;
        while(pos < a.size())
        {
            int cnt = pos;
            bool f = true; 
            for(int i = 0; i<b.size(); i++)
            {
                if(a[cnt] == b[i])
                {
                    cnt++;
                }
                else
                {
                    f= false;
                    break;
                }
            }
            if(f == false)
            {
                pos++;
            }
            else
            {
                pos+=b.size();
                total++;
            }
        }

        cout << "#" << t << " " << a.size()-(total*b.size()) + total << "\n";
    }
}
