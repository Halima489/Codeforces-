#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = n % 2 == 0 ? n / 2 : (n / 2) + 1;
    cout << result << endl;
    return 0;
}

