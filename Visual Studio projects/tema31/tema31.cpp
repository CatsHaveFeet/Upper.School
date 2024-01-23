#include <iostream>

using namespace std;

int p[200000];

int main()
{
    int n, r, x, s = 0, d, m;
    cin >> n;
    d = n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    cin >> r;
    for (int i = 0; i < r; i++) {
        cin >> x;
        while (d - s > 1 || s + 1 == n) {
            m = (s + d) / 2;
            if (p[m] > x) {
                s = m;
            }
            else {
                d = m;
            }
        }
        if (x > p[m]) {
            cout << m + 1 << ' ';
        }
        else if (x < p[m]) {
            cout << m - 1 << ' ';
        }
        else {
            cout << ;
        }
    }

    return 0;
}