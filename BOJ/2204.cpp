#include<iostream>
#include<string>
#include<set>

using namespace std;



int main()
{
    while(1)
    {

        int n;
        cin >> n;
        set<pair<string,string>>check;

        if(n==0) break;

        for(int i =0; i<n; i++)
        {
            string temp;
            cin >> temp;

            string copytemp = temp;
            for(int j = 0; j<copytemp.size(); j++)
            {
                if(copytemp[j] >90 )
                {
                    copytemp[j]-=32;
                }
            }
            check.insert({copytemp, temp});
        }

        set<pair<string,string>>::iterator it = check.begin();

        cout << it->second << "\n";

    }

}
