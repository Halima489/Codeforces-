#include <iostream>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int time1 = ((n + k - 1) / k) * t;
    int time2 = d + t * ((n + k - 1) / k - 1);
    if(time2 < time1) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
