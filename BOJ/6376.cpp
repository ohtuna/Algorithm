#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

double fac[10];
double e[10];
double s[10];

int main()
{

    fac[0] = 1;
    fac[1] = 1;
    for(int i =2; i<=9; i++)
    {
        fac[i] = fac[i-1] * i;
    }

    for(int i =0; i<=9; i++)
    {
        for(int j =0; j<=i; j++)
        {
            e[i] += ((double)1/(double)fac[j]);
        }
        
    }

   cout << "n e" <<"\n";
   cout << "- -----------" << "\n";
   cout << 0 << " " <<1 <<"\n";
   cout << 1 << " " << 2 <<"\n";
   cout << 2 << " " << 2.5 <<"\n";
   cout << "3 2.666666667" << "\n";
   cout << "4 2.708333333" << "\n";
   
   for(int i =5; i<=9; i++)
   {
       printf("%d %.9lf\n", i, e[i]);
   }
    





}
