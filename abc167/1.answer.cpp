#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string t;

    cin >> s;
    cin >> t;
    
    //tの末尾の文字を削除
    t.pop_back();

    if (s == t) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}