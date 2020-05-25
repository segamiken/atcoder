#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    //配列の宣言
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        //受け取った値を配列にいれる
        cin >> vec.at(i);
    }

    int answer = 0;
    //配列の中身を順番に回し、全部偶数ならプラス１
    for (int i = 0; i < n; i++) {
        if ((vec.at(i) % 2) == 0) {
            if (i == (n - 1)) {
                answer ++;
                i = 0;
            }
            vec.at(i) = vec.at(i) / 2;
        } else {
            break;
        }
    }

    cout << answer;
    return 0;
}