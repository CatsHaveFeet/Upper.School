#include <iostream>

using namespace std;

int FMBSorted(int a[2001][2001], int n) {
    int st = 0, dr = n - 1, m, i = 1, maxim = INT_MIN;
    m = dr / 2;
    while (i <= n) {
        while (st <= dr) {
            if (a[i][m]) {
                dr = m - 1;
            }
            else {
                st = m + 1;
            }
            m = (st + dr) / 2;
        }
        if (m > maxim) {
            maxim = m;
        }
        i++;
    }
    return maxim;
}

int main()
{
    int n;
    int a[2001][2001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << FMBSorted(a, n);

    return 0;
}
