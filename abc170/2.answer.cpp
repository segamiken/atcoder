#include<iostream>
using namespace std;

int main() {   
    //動物の総数がx
    //足の本数の総数がy
    int X;
    int Y;
    cin >> X >> Y;

    string answer = "No";
    for (int t=0; t<=X; t++) {
        for (int k=0; k<=Y; k++) {
            if ((t + k) == X) {
                if ((t * 2) + (k * 4) == Y) {
                    answer = "Yes";
                    break;                    
                }
            }
        }
    }

    cout << answer;
    return 0;
}