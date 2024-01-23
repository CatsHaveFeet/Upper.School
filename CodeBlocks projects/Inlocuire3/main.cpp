#include <iostream>

using namespace std;

void citire(int &n, int v[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void afisare(int n, int v[]) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}

bool prim(int n) {
    int cnt = 1;
    int d = 2;
    while(n > 1){
        int p = 0;
        while(n % d == 0) {
            n/=d, p++;
        }
        cnt *= (p + 1);
        d++;
        if(d * d > n) {
            d = n;
        }
    }
    return cnt == 2;
}
int urmatorul_prim(int n) {
    if(n == 0 || n == 1) {
        return 2;
    }
    if(n % 2 == 0) {
        n++;
    }
    while(!prim(n)) {
        n += 2;
    }
    return n;
}

void inloc(int v[], int i, int nr) {
    v[i] = nr;
}

int main()
{
    int n, v[1000];
    citire(n, v);
    for (int i = 0; i < n; i++) {
        if(!prim(v[i])) {
            inloc(v, i, urmatorul_prim(v[i]));
        }
    }
    afisare(n, v);

    return 0;
}
