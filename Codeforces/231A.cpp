#include<iostream>

using namespace std;

int main() {
    int Petya;
    int Vasya;
    int Tonya;

    int n;

    cin >> n;

    int answer = 0;


    for (int i = 0; i < n; i++) {
        int total = 0;
        cin >> Petya >> Vasya >> Tonya;

        if (Petya == 1) total++;
        if (Vasya == 1) total++;
        if (Tonya == 1) total++;
        if (total >= 2) answer++;
    }

    cout << answer;
}
