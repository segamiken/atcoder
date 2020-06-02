#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    //1の桁の数
    int count = N % 10;

    if (count == 3) {
        cout << "bon";
    } else if (count == 0 or count == 1 or count == 6 or count == 8) {
        cout << "pon";
    } else {
        cout << "hon";
    }

    return 0;
}