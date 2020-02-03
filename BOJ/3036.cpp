#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main()
{

    int n;

    cin >> n;
    vector<int>a(n);

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    int A = 0;
    int B = 0;
    int temp = 1;
    int divide;
    for(int i = 0; i<n-1; i++)
    {
        if(i == 0)
        {
            A = a[i];
            B = a[i+1];
        }
        else
        {
            A*=a[i];
            B*=a[i+1];
        }
        
      
        divide = gcd(A,B);
        A/= divide;
        B/= divide;
        
        cout << A << "/" << B << "\n";
    }
    
}
