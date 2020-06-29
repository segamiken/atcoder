#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //N種類の果物の中からK種類を選ぶ
    int N, K;
    cin >> N >> K;
    
    //N回入力を受ける
    vector<int> vec(N);
    for (int i=0; i<N; i++) {
        cin >> vec.at(i);
    }

    //受け取った配列を数が少ない順にソートする
    sort(vec.begin(), vec.end());

    //配列の0番目からK番目までを足し算する
    int answer = 0;
    for (int i=0; i<K; i++) {
        answer += vec.at(i);
    }

    cout << answer;
    return 0;
}