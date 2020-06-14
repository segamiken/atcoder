#include<iostream>
#include<vector>
using namespace std;

int main() {
    //配列の宣言
    vector<int> vec(5);

    for (int i=0; i<5; i++) {
        cin >> vec.at(i);
    }

    int answer;
    //配列vecの中から0にあたる部分を探す
    for (int i=0; i<5; i++) {
        if (vec.at(i) == 0) {
            answer = i+1;
        }
    }
    cout << answer;
    return 0;
}