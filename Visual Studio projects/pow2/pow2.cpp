/*
#include <iostream>

using namespace std;

int sir[99];

int main()
{
    int n, m, max_m = -1, x, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) { //MaxMin1
        cin >> sir[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x > max_m) {
            max_m = x;
        }
    }
    for (int i = 0; i < n; i++) {
        if (sir[i] > max_m) {
            c++;
        }
    }
    cout << c;

    return 0;
}
*/
/*
#include <fstream>

using namespace std;

int v[1000];

int main()
{
    ifstream fin("maxsim.in");
    ofstream fout("maxsim.out");

    int n, m, s = 1, d, suma_max = -1, poz_s, poz_d;
    fin >> n;
    if (n % 2 == 0) {
        m = (n - 1) / 2;
        d = n - 1;
    }
    else {
        m = n / 2;
        d = n;
    }
    for (int i = 1; i <= n; i++) {
        fin >> v[i];
    }
    while (s != m && d != m) {
        if (v[s] + v[d] > suma_max) {
            suma_max = v[s] + v[d];
            poz_s = s;
            poz_d = d;
        }
        s++;
        d--;
    }
    fout << suma_max << ' ' << poz_s << ' ' << poz_d;

    return 0;
}
*/
/*
#include <fstream>

using namespace std;

int v[299];

int main() 
{
    ifstream fin("zone.in");
    ofstream fout("zone.out");

    int n, par = -1, impar = -1, poz_par, poz_impar;
    fin >> n;
    for (int i = 0; i < n * 3; i++) {
        fin >> v[i];
        if (i < n) {
            if (v[i] % 2 == 0) {
                par = v[i];
                poz_par = i;
            }
        }
        if (i >= n * 2) {
            if (v[i] % 2 == 1) {
                impar = v[i];
                poz_impar = i;
            }
        }
    }
    if (par != -1 && impar != -1) {
        v[poz_par] = impar;
        v[poz_impar] = par;
    }
    for (int i = 0; i < n * 3; i++) {
        fout << v[i] << ' ';
    }

    return 0;
}
*/
/*
#include <fstream>

using namespace std;

int v[999], r[999];

int main() 
{
    ifstream fin("crb.in");
    ofstream fout("crb.out");

    int n, maxi, imax, c = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> v[i];
        r[i] = v[i];
    }
    for (int i = 0; i < n; i++) {
        maxi = v[i];
        imax = i;
        for (int j = i + 1; j < n; j++) {
            if (maxi < v[j]) {
                maxi = v[j];
                imax = j;
            }
        }
        v[imax] = v[i];
        v[i] = maxi;
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == r[i]) {
            c++;
        }
    }
    fout << c;

    return 0;
}
*/
#include <fstream>

using namespace std;

int main()
{
    int n;

    return 0;
}