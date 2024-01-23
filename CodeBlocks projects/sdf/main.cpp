#include <fstream>

using namespace std;

const int LMAX = 1000000;
int ciur[LMAX + 1];
bool prim[241];

int main()
{
	ifstream fin("fantastice.in");
	ofstream fout("fantastice.out");

	int n, x, num_f = 0;
	fin >> n;
	for(int i = 2; i * i < LMAX; i++){
        if(prim[i] == 0){
            for(int j = i * i; j < LMAX; j += i){
                prim[j] = 1;
            }
        }
	}
	for (int i = 2; i * 2 <= LMAX; i++) {
		for (int j = i * 2; j < LMAX; j += i) {
			ciur[j]++;
		}
	}
	for(int i = 0; i < LMAX; i++){
        fout << ciur[i] << ' ';
	}
	for (int i = 0; i < n; i++) {
		fin >> x;
		while(a < 240){

		}
	}
	fout << endl << num_f;

	return 0;
}
