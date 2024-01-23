#include <iostream>
#include <cstring>

using namespace std;

int h[151];

int main()
{
    int n;
    cin >> n;
    struct elev {
        char nume[50];
        int inaltime;
    }x[n + 1];
    for (int i = 0; i < n; i++) {
        cin.get();
        cin.get(x.nume, 50, >= '1' &&  <= '9');
        cin >> x.inaltime;
    }

    return 0;
}
