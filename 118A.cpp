#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    cout << s << "\n";
    return 0;
}
