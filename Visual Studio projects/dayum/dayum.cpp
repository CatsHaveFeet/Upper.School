/*///////////////////////////////////////////////////////

//problema 1

#include <iostream>

using namespace std;

int main()
{
    int n, M = 0, nr, cifmax = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nr;
        int c = nr;
        while (c > 10) {
            c /= 10;
        }
        if (c >= cifmax) {
            if (c == cifmax) {
                if (nr > M) {
                    M = nr;
                }
            }
            else {
                cifmax = c;
                M = nr;
            }
        }
    }
    cout << M;

    return 0;
}
*/////////////////////////////////////////////////////////

/*////////////////////////////////////////////////////////

// problema 2

#include <iostream>

using namespace std;

int main()
{
    int n, x, c, p10, cx, y, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        c = x % 10;
        y = 0;
        p10 = 1;
        while (x != 0) {
            cx = x % 10;
            if (c != cx) {
                y = cx * p10 + y;
                p10 *= 10;
            }
            x /= 10;
        }
        s += y;
    }
    cout << s;

    return 0;
}
*/////////////////////////////////////////////////////////

/*////////////////////////////////////////////////////////

// problema 3

#include <iostream>

using namespace std;

int main()
{
    int n, Z = 0, m5, cm5;
    cin >> n;
    for (m5 = 5; m5 <= n; m5 += 5) {
        cm5 = m5;
        while (cm5 % 5 == 0) {
            Z++;
            cm5 /= 5;
        }
    }
    cout << Z;

    return 0;
}
*/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////

// problema 5

#include <iostream>

using namespace std;

int main()
{
    int n;

    return 0;
}
/////////////////////////////////////////////////////////