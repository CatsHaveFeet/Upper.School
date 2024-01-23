#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double D = 0;
    int C = 0;
    cin >> n;
    struct punct {
        double x, y;
    } c;
    for (int i = 0; i < n; i++) {
        cin >> c.x >> c.y;
        double x = c.x * c.x + c.y * c.y;
        if (x >= D) {
            if (x > D) {
                D = x;
                C = 1;
            }
            else {
                C++;
            }
        }
    }
    cout << fixed << setprecision(3) << sqrt(D) << ' ' << C;

    return 0;
}
