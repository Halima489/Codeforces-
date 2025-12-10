#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x != 1) res++;
    }
    cout << res << "\n";
    return 0;
}
