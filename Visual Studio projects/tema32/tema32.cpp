#include <fstream>

using namespace std;

const int LMAX = 10000;
int a[LMAX], b[LMAX], mul[LMAX], f[LMAX];

int main()
{
    ifstream fin("interclasm.in");
    ofstream fout("interclasm.out");

    int n, m, x;
    fin >> x >> n;
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    fin >> m;
    for (int i = 0; i < m; i++) {
        fin >> b[i];
    }
    for (int i = 0; i < LMAX; i++) {
        mul[i] = x * i;
    }
    int i = 0;
    while (i < n && i < m) {
        if (a[i] % x == 0) {
            f[a[i] / x]++;
        }
        if (b[i] % x == 0) {
            f[b[i] / x]++;
        }
        i++;
    }
    while (i < n) {
        if (a[i] % x == 0) {
            f[a[i] / x]++;
        }
        i++;
    }
    while (i < m) {
        if (b[i] % x == 0) {
            f[b[i] / x]++;
        }
        i++;
    }
    for (i = 0; i < LMAX; i++) {
        if (f[i] == 1) {
            fout << mul[i] << ' ';
        }
    }


    return 0;
}
