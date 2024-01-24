#include <iostream>

using namespace std;

int NrDiv(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int cntr = 2;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cntr += 2;
        }
        if (i * i == n) {
            cntr--;
        }
    }
    return cntr;
}

int NextNrDiv(int n) {
    int i;
    int nr_div = NrDiv(n);
    for (i = n + 1; NrDiv(i) != nr_div; i++);
    return i;
}

int PrevNrDiv(int n) {
    int i;
    int nr_div = NrDiv(n);
    for (i = n - 1; i >= 0 && NrDiv(i) != nr_div; i--);
    return i;
}

int main()
{
    int n;
    cin >> n;
    cout << NrDiv(n) << '\n';
    cout << NextNrDiv(n) << '\n';
    cout << PrevNrDiv(n);

    return 0;
}
