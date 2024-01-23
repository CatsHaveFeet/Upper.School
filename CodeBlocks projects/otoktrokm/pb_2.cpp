#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[100], *c;
    cin.get(a, 100, '\n');
    c = strtok(a, " ");
    cout << c;
    while (c) {
        int n = strlen(c);
        cout << n;
        for (int i = 0; i < n; i++) {
            cout << strchr ("aeiou", c[i]);
            if (strchr("aeiou", c[i])) {
                cout << strcat(c + i, c + i + 1);
                strcat(c + i, c + i + 1);
            }
        }
        cout << c << " ";
        c = strtok(0, " ");
    }

    return 0;
}
