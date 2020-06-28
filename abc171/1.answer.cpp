#include<iostream>
using namespace std;

int main() {
    string x;
    cin >> x;

    if (x >= "a" && x <= "z") {
        cout << "a";
    } else if (x >= "A" && x <= "Z") {
        cout << "A";
    } else {
        cout << "wrong input";
    }
    return 0;
}