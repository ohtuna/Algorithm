#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d",&a, &b);

    int left = 0;
    int right = 0;
    
    while(1)
    {
       if(a == 1)
       {
           right += (b-a);
           break;
       }
       else if(b==1)
       {
           left += (a-b);
           break;
       }
       else if(a<b)
       {
           right += b/a;
           b %= a;
       }
       else
       {
           left+= a/b;
           a %=b;
       }
       
    }

    printf("%d %d", left, right);


}
