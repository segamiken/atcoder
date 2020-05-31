#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    //文字列が与えられる
    string S;
    cin >> S;

    //Tは最初空文字
    string T;

    //Sを逆順に並び替え
    reverse(S.begin(), S.end());

    //Tの末尾に dream dreamer erase eraser のいずれかを追加する。
    //それぞれ逆順に並び替えた文字列と比較する
    for (int i = 0; i < S.size(); i++) {
        T += S[i];
        if (T == "maerd" || T == "remaerd" || T == "esare" || T == "resare" ) {
            T = "";
        }
    }
  
    //YesかNoで判定
    if (T == "") {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}