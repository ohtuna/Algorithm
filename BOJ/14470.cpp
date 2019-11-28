#include<iostream>

using namespace std;

int main()
{
    int a, b,c,d,e;

    cin >>a>>b>>c>>d>>e;

    int sec = 0;
    if(a < 0)
    {
        while(a < 0)
        {
            a++;
            sec+=c;
        }
        sec += d;
        while(a <b)
        {
            a++;
            sec+=e;
        }
    }
    else if(a == 0)
    {
        sec+=d;
         while(a <b)
        {
            a++;
            sec+=e;
        }
    }
    else
    {
        while(a <b)
        {
            a++;
            sec+=e;
        }
    }

    cout << sec;
}
