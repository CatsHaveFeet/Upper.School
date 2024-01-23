#include <iostream>

using namespace std;

const int LMAX = 611953;
bool ciur[LMAX];

int main()
{
	int n, j = 1, cntr = 0;
	cin >> n;
	for (int i = 2; i * i < LMAX; i++) {
		if (ciur[i] == 0) {
			for (int z = i * i; z < LMAX; z += i) {
				ciur[z] = 1;
			}
		}
	}
	do {
		j++;
		if (ciur[j] == 0) {
			cntr++;
		}
	} while (cntr < n);
	cout << (long long)j * j;

	return 0;
}