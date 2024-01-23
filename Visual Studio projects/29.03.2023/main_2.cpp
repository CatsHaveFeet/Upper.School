#include <fstream>

using namespace std;

const int LMAX = 1000000;
int ciur[LMAX + 1];

int main()
{
	ifstream fin("fantastice.in");
	ofstream fout("fantastice.out");

	int n, x, num_f = 0;
	fin >> n;
	for (int i = 2; i * 2 <= LMAX; i++) {
		for (int j = i * 2; j < LMAX; j += i) {
			ciur[j]++;
		}
	}
	for (int i = 0; i < n; i++) {
		fin >> x;
		if (ciur[x] == 3) {
			num_f++;
		}
	}
	fout << num_f;

	return 0;
}