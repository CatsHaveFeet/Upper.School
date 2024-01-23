/***************************************************************************************************
#include <iostream>

using namespace std;

int v[1000000];

int main()
{
    int n, x, s = 0, d, poz = -1, m;
    cin >> x >> n;
    d = n - 1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while (s <= d && poz == -1) {
        m = (d + s) / 2;
        if (v[m] == x) {
            poz = m;
        }
        else if (v[m] < x) {
            s = m + 1;
        }
        else {
            d = m - 1;
        }
    }
    if (poz == -1) {
        cout << "nu exista";
    }
    else {
        cout << poz;
    }
    return 0;
}
***************************************************************************************************/