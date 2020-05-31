#include<iostream>
using namespace std;

int main() {
    int N; //N枚のお札
    int Y; //Y円

    cin >> N >> Y;

    //10000円札 x枚、5000円札 y枚、1000円札 z枚
    bool finished = false;  // 外側のループを抜ける条件を満たしているかどうか(フラグ変数)

    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= (N - x); y++) {
            if ((10000 * x) + (5000 * y) + (1000 * (N - x- y)) == Y) {
                finished = true;
                cout << x << " " << y << " " << N-x-y;
                break;
            }
        }
        if (finished) {
            break;
        }
    }

    if (!finished) {
        cout << -1 << " " << -1 << " " << -1;
    }
    return 0;
}