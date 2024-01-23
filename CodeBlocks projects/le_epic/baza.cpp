#include <iostream>

using namespace std;

int baza(int n) {
    int cifmax = 0;
    while (n > 0) {
        if (n % 10 > cifmax) {
            cifmax = n % 10;
        }
        n /= 10;
    }
    return cifmax + 1;
}

int main() {
    cout << baza(0);
}
