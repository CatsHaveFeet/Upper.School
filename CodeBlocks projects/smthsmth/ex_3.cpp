#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

int v[200];

int main()
{
    int sum = 0, i = 0;
    char n;
    bool nr = false;
    while (cin.get(n)) {
        if (n == '\n') {
            break;
        }
        if (n >= '0' && n <= '9') {
            if (nr) {
                v[i] = v[i] * 10 + (n - '0');
            }
            else {
                v[i] += (n - '0');
                nr = true;
            }
        }
        else{
            if (nr) {
                i++;
                nr = false;
            }
        }
    }
    for (i = 0; i < 200; i++) {
        sum += v[i];
    }
    cout << sum;


    return 0;
}
