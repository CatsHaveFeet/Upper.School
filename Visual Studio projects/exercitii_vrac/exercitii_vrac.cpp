/*****************************************************
#include <iostream>

using namespace std;

int matrix[300][300];

int main()
{
    int n, cntr = 1, i = 0, j = 0, lim = 0;
    cin >> n;
    while (lim != n) {
        if (i != 0 && j != 0 && lim == 0) {
            lim++;
        }
        if (i == 0 && j == 0) {
            matrix[i][j] = cntr;
            cntr++;
            j++;
        }
        else if (i == lim) {
            while (j != lim) {
                matrix[i][j] = cntr;
                cntr++;
                i++;
                j--;
            }
            matrix[i][j] = cntr;
            cntr++;
            i++;
            if (lim != 0) {
                lim++;
            }
        }
        else if (j == lim) {
            while (i != lim) {
                matrix[i][j] = cntr;
                cntr++;
                j++;
                i--;
            }
            matrix[i][j] = cntr;
            cntr++;
            j++;
            if (lim != 0) {
                lim++;
            }
        }
    }
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            cout << matrix[x][y];
        }
    }

    return 0;
}
*****************************************************/
#include <iostream>

using namespace std;

int matrix[300][300];

int main()
{
    int n;

    return 0;
}