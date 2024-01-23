#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[100], *maxim = "0";
    cin.get(a, 100, '\n');
    char* c = "!";
    c = strtok(a, " ");
    while (c) {
        if (c[0] >= '0' && c[0] <= '9') {
            if (c[0] > maxim[0]) {
                maxim = c;
            }
        }
        c = strtok(0, " ");
    }
    if (maxim != "0") {
        cout << maxim;
    }
    else {
        cout << "nu exista";
    }

    return 0;
}
