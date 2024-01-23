/**********************************************
#include <iostream>

using namespace std;

int matrix[100][100];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        cout << matrix[n - 1][i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << matrix[0][i] << ' ';
    }
}
***********************************************/
#include <iostream>

using namespace std;

int matrix[100][100];

int main()
{
    int n, m, e, i, j;
    cin >> n >> m >> e;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    i = 0;
    j = 0;
    while (i < n && matrix[i][j] != e) {
        j++;
        if (j == m) {
            j = 0;
            i++;
        }
    }
    if (i < n) {
        cout << i << ' ' << j;
    }
    else {
        cout << "Nu exista!";
    }

    return 0;
}