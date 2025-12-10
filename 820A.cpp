#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int time = 0, page = 1;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        if (time + l <= t) {
            time += l;
            page++;
        } else {
            break;
        }
    }
    cout << page << endl;
    return 0;
}

