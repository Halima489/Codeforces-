#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int time1 = a + b;
    int time2 = c + d;
    if (time1 < time2)
        cout << "First" << endl;
    else if (time1 > time2)
        cout << "Second" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
