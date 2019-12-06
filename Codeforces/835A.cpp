#include<iostream>

using namespace std;

int main()
{
    int s, v1, v2, t1, t2;

    cin >> s >> v1 >> v2 >> t1 >> t2;


    int a = t1 + (v1*s) + t1;
    int b = t2 + (v2*s) + t2;

    if(a < b)
    {
        cout << "First";
    }
    else if( a > b)
    {
        cout << "Second";
    }
    else
    {
        cout << "Friendship";
    }
    
}
