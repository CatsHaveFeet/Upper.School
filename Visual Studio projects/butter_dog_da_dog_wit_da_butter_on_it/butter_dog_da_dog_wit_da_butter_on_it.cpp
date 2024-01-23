/****************************************************************
#include <iostream>

using namespace std;

int A[2000];
int B[2000];

int main()
{
    int n, i, j = 0, x;
    bool ok = true;
    cin >> n;
    i = n + 1;
    for (int a = 0; a < n; a++) {
        cin >> A[a];
    }
    while (ok == true || i != 0 && j != 0) {
        cin >> x;
        while (B[j] != x && ok == true) {
            if (A[0] == 0) {
                ok = false;
            }
            else {
                j++;
                B[j] = A[0];
                for (int k = 0; k < i; k++) {
                    A[k] = A[k + 1];
                }
                i--;
                cout << 'I';
            }
        }
        if (B[j] == x) {
            B[j] = 0;
            j--;
            cout << 'O';
        }
    }

    return 0;
}
*******************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;

    return 0;
}