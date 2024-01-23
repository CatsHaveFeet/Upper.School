/*/////////////////////////////////////////////////
#include <iostream>

using namespace std;

int matrix_a[9][9], matrix_b[9][9];


int main()
{
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix_a[i][j];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            matrix_b[n - i - 1][j] = matrix_a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix_b[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
*//////////////////////////////////////////////////
/*/////////////////////////////////////////////////
#include <iostream>

using namespace std;

int pod[1000][1000];

int main()
{
    int n, m, p = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> pod[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int j = 0;
        while (pod[j][i] != 0) {
            pod[j][i]--;
            j++;
            if (j == n) {
                p++;
                j = 0;
            }
        }
    }
    cout << p;
    
    return 0;
}
*//////////////////////////////////////////////////