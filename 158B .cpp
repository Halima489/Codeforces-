#include <iostream>
using namespace std;

int main() {
    int n, a, b, count = 0;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (a > 0) {
                a--;
                count++;
            } else if (b > 0) {
                b--;
                count++;
            }
        }
    }

    cout << count << "\n";
    return 0;
}
