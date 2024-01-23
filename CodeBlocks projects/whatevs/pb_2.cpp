#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, t = INT_MAX, b = -1, p, q;
    cin >> n;
    struct data {
        int an, luna, zi;
    } x;
    for (int i = 0; i < n; i++) {
        cin >> x.an >> x.luna >> x.zi;
        int v = x.an * 356 + x.luna * 31 + x.zi;
        if (v >= b) {
            b = v;
            p = i + 1;
        }
        if (v <= t) {
            t = v;
            q = i + 1;
        }
    }
    cout << p << ' ' << q;

    return 0;
}
