#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    //配列の宣言
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        //受け取った値を配列にいれる
        cin >> vec.at(i);
    }

    //配列の要素を数値の大きい順にソートする
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int alice = 0;
    int bob = 0;
    for (int i = 0; i < n; i++) {
        //配列の中の大きいものから順番にAlice,Bobが取っていく
        //indexが偶数番目はAが取得、奇数はB。
        if ((i % 2) == 0) {
            alice += vec.at(i);
        } else {
            bob += vec.at(i);
        }
    }
    cout << alice - bob << endl;
    return 0;
}