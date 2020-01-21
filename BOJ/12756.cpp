#include<iostream>

using namespace std;

int main()
{
    int aAttack, alife, bAttack, blife;
    cin >> aAttack >> alife >> bAttack >> blife;

    while(1)
    {
        if(alife <= 0 )break;
        if(blife <= 0)break;
        blife-=aAttack;
        alife-=bAttack;
    }

    if(alife > 0)
    {
        cout << "PLAYER A";
    }
    else if(blife > 0)
    {
        cout << "PLAYER B";
    }
    else
    {
        cout << "DRAW";
    }
    
}
