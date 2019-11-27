#include<iostream>

using namespace std;

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;

    for(int i =0; i<3; i++)
    {

    
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

    int ansh = 0;
    int ansm = 0;
    int anss = 0;

    while(1)
    {
        if(h2 == h1 && m1 == m2 && s1 == s2)break;

        s1++;
        anss++;
        if(s1 == 60)
        {
            s1 = 0;
            m1++;
        }
        if(anss == 60)
        {
            anss = 0;
            ansm++;
        }
        if(m1 == 60)
        {
            m1 = 0;
            h1++;
        }
        if(ansm == 60)
        {
            ansm = 0;
            ansh++;
        }
        if(h1 == 24)
        {
            h1 = 0;
        }
        if(ansh == 24)
        {
            ansh = 0;
        }
    }

    cout << ansh << " " << ansm << " " << anss << "\n";
    }
    
}
