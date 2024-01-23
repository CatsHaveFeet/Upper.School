#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

char s[101];

int main()
{
    cin >> s;
    int k = 0, n = strlen(s);
    while (k < n) {
        for (int i = 0; i < n; i++) {
            if (i != k) {
                cout << s[i];
            }
        }
        k++;
        cout << '\n';
    }



    return 0;
}
