#include<iostream>
using namespace std;

int main() {
    int K;
    cin >> K; //文字列の長さ
    
    string S;
    cin >> S;
    
    if (S.size() <= K) {
        cout << S;
    } else {
        while (S.size() > K) {
            S.pop_back();
        }
        cout << S + "...";
    }

    return 0;
}