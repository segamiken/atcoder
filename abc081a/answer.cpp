#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int bdama = 0;
    for (int i=0; i<3; i++) {
       if (s[i] == '1') {
           bdama ++;
       }
    }

    cout << bdama;
    return 0;
}