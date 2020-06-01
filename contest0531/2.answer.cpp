#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

//最大値は10の18乗
const long long mx = 1e18; 

int main()
{
    int64_t N;
    cin >> N;

    vector<int64_t> vec(N);

    for (int64_t i = 0; i < N; i++) {
        cin >> vec.at(i);
    }

    uint64_t answer = 1;
    bool toobig = false;

    //受け取った値を小さい順にソートする
    sort(vec.begin(), vec.end());

    for (int64_t i = 0; i < N; i++) {

        //before_answerは直前までの掛け算の結果
        uint64_t before_answer = answer;
        
        answer *= vec.at(i);

        //maxを超えていれば処理を抜ける
        if (answer > mx) {
            toobig = true;
            break; 
        
        //overflowの判定。overflowせず正しく掛け算できていれば、今のanswerを直前に掛けた数で割るとbefore_answerと同じ数になるはず。
        //ということを利用したif文。割った結果が違うければoverflowしたってこと。
        } else if (answer / vec.at(i) != before_answer) {
            toobig = true;
            break;
        }
    }

    if (toobig) {
        cout << "-1"; 
    } else {
        cout << answer;
    }

    return 0;
}