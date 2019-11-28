#include<iostream>
#include<cstdio>

using namespace std;

const double pi = 3.141592;

int main()
{
    int d1, d2;

    cin >> d1 >>d2;

    printf("%.6lf", d1*2 + (d2*2*pi));
}
