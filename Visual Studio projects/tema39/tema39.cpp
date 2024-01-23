#include <fstream>

using namespace std;

int matrix[22][22];

int main()
{
    ifstream fin("maxminmatrice.in");
    ofstream fout("maxminmatrice.out");

    int n, m, minval, maxval = 0;
    fin >> m >> n;
    for (int i = 0; i < m; i++) {
        minval = 10000;
        for (int j = 0; j < n; j++) {
            fin >> matrix[i][j];
            if (matrix[i][j] < minval) {
                minval = matrix[i][j]; 
            }
        }
        if (minval > maxval) {
            maxval = minval;
        }
    }
    fout << maxval;

    return 0;
}