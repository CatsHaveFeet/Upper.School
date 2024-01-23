#include <iostream>

using namespace std;

int a[102][102];
int lin[4] = {-1, 0, 1,  0};
int col[4] = { 0, 1, 0, -1};
	//		   0  1  2   3
	//		   N  E  S   V

int main()
{
	int n, m, i, j, dir, l, c;
	long long s, smin = 100 * long long(INT_MAX), lmin = 100 * long long(INT_MAX), cmin = 100 * long long(INT_MAX);
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (j = 0; j <= m + 1; j++) {
		a[0][j] = a[n + 1][j] = INT_MAX;
	}
	for (i = 0; i <= n + 1; i++) {
		a[i][0] = a[i][m + 1] = INT_MAX;
	}

	/*for (i = 0; i <= n + 1; i++) {
		for (j = 0; j <= m + 1; j++) {
			cout << a[i][j] << ' '; //afisare
		}
		cout << endl;
	}*/

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (a[i][j] < 0) {
				for (dir = 0; dir < 4; dir++) {
					l = i + lin[dir];
					c = j + col[dir];
					s = 0;
					while (a[l][c] != INT_MAX && a[l][c] >= 0) {
						s += a[l][c];
						l += lin[dir];
						c += col[dir];
					}
					if (a[l][c] == INT_MAX && s < smin) {
						smin = s;
						lmin = i;
						cmin = j;
					}
				}
			}
		}
	}

	cout << lmin << ' ' << cmin << ' ' << smin;

	return 0;
}