#include<iostream>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int answer = 0;
    for (int i = 1; i <= A; i++)
    {   
        if (i > K)
        {
            break;
        } else {
            answer += 1;
        }
    }

    for (int i = 1; i <= B; i++)
    {
        if (A + i > K)
        {
            break;
        } else {
            answer += 0;
        }
    }

    for (int i = 1; i <= C; i++)
    {
        if (A + B + i > K)
        {
            break;
        } else {
            answer -= 1;
        }   
    }
    
    cout << answer;
    return 0;
}