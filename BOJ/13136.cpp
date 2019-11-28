#include<iostream>

using namespace std;

int main()
{
    int r,c,n;

    cin >> r >> c >> n;

    long long y = 0;
    long long x = 0;
    if(r%n == 0)
    {
        y = r/n;
    }
    else
    {
        y = (r/n)+1;
    }
    if(c%n == 0)
    {
        x = c/n;
    }
    else
    {
        x = c/n+1;
    }

    cout << y*x;
    
    

}
