#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int ab = a * b;
    
    if ((ab % 2) == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}