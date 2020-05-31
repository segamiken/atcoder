#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    cin >> N; //N回入力できる

    //t,x,yの配列の宣言
    vector<int> t(1000000);
    vector<int> x(1000000);
    vector<int> y(1000000);

    t.at(0) = x.at(0) = y.at(0) = 0;  // 初期状態

    //値を入力していく
    for (int i = 0; i < N; i++) {
        cin >> t.at(i+1) >> x.at(i+1) >> y.at(i+1);
    }

    bool can = true;
    for (int i = 0; i < N; i++) {
        int dtime = t.at(i + 1) - t.at(i);
        int distance = abs(x.at(i+1) - x.at(i)) + abs(y.at(i+1) - y.at(i));

        if(dtime < distance) {
            can = false;
        }
        if (distance % 2 != dtime % 2) {
            can = false;
        }
    }

    if (can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}