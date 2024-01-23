#include <iostream>

using namespace std;

int matrix[100][100]; //matricea nici nu este necesara

int main()
{
    int n, m, s = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] % 2 == 0) {
                s += matrix[i][j];
            }
        }
    }
    cout << s;

    return 0;
}