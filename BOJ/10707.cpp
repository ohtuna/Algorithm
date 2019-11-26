#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,p;

    cin >> a >> b >> c >> d >> p;

    int sumA = 0;
    int sumB = 0;

    if(p <= c)
    {
        sumA = a*p;
        sumB = b;
    }
    else
    {
        sumA = a*p;
        sumB = b + ((p-c)*d);
    }

    if(sumA < sumB)
    {
        cout << sumA;
    }
    else
    {
        cout << sumB;
    }
    
}
