#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<pair<int, int>> cars(n);
    for (int i = 0; i < n; i++) {
        cin >> cars[i].first >> cars[i].second;
    }
    sort(cars.begin(), cars.end());
    int max_wait = 0;
    int prev_end = 0;
    for (int i = 0; i < n; i++) {
        if (cars[i].first > prev_end) {
            max_wait = max(max_wait, cars[i].first - prev_end);
        }
        prev_end = max(prev_end, cars[i].second);
    }
    max_wait = max(max_wait, t - prev_end);
    cout << max_wait << endl;
    return 0;
}
