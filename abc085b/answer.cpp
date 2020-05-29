#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    //vecを小さい順にソートする
    sort(vec.begin(), vec.end());

    int answer = 0;
    for (int i = 1; i < n; i++) {
        if (vec.at(i) > vec.at(i - 1)) {
            answer ++;
        }
    }
    //配列のsizeをカウントする
    cout << answer + 1;
    
    return 0;
}