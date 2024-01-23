#include <fstream>

using namespace std;

const int LMAX = 4652506;
bool ciur[LMAX + 1];

int main()
{
	ifstream fin("prim997.in");
	ofstream fout("prim997.out");

	int n, k, lnp_max, lnp_temp, np, np_temp;
	fin >> n;
	for (int i = 2; i * i <= LMAX; i++) {
		if (ciur[i] == 0) {
			for (int j = i * i; j <= LMAX; j += i) {
				ciur[j] = 1;
			}
		}
	}
	ciur[1] = 1;
	for (int i = 0; i < n; i++){
		fin >> k;
		if(k > LMAX){
            k = LMAX;
		}
		lnp_max = 1;
		lnp_temp = 0;
		np = 1;
		for (int j = 8; j <= k; j++) {
			if (ciur[j] == 0) {
				lnp_temp = 0;
			}
			else {
				if (lnp_temp == 0) {
					np_temp = j;
				}
				lnp_temp++;
			}
			if (lnp_temp > lnp_max) {
				lnp_max = lnp_temp;
				np = np_temp;
			}
		}
		fout << np << ' '<< lnp_max << endl;
	}

	return 0;
}
