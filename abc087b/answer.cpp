#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int answer = 0;
    for (int a=0; a<=A; a++) {
        for (int b=0; b<=B; b++) {
            for (int c=0; c<=C; c++) {
                if ((500 * a) + (100 * b) + (50 * c) == X) {
                    answer ++;
                }
            }
        }
    }

    cout << answer;
    return 0;
}