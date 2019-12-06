#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    while(1)
    {
        int a,b,c;

        cin >> a >> b >> c;
        int length = max(max(a,b), c);
        int total = a+b+c;
        

        if(a == 0 && b== 0 && c==0)break;
        
        total -= length;

        if(total <= length)
        {
            cout << "Invalid" << "\n";
        }
        else if(a == b && b==c && a==c)
        {
            cout << "Equilateral" << "\n";
        }
        else if(a == b || b == c || a == c)
        {
            cout << "Isosceles" << "\n";
        }
        else if( a!=b && b != c && a!=c)
        {
            cout << "Scalene" << "\n";   
        }

        
    }
}
