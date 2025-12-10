#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if ((s.back() - '0') % 2 == 1) {
        cout << "ODD" << endl;
    } else {
        cout << "EVEN" << endl;
    }
    return 0;
}
