#include<iostream>

using namespace std;

int main()
{
    int round;

    int m = 0;
    int c = 0;
    cin >> round;
    for(int i =0; i<round; i++)
    {
        int p, q;

        cin >> p >> q;

        if(p>q)
        {
            m++;
        }
        else if(p<q)
        {
            c++;
        }
    }

    if(m > c)
    {
        cout << "Mishka";
    }
    else if( m < c)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
    
    
}
