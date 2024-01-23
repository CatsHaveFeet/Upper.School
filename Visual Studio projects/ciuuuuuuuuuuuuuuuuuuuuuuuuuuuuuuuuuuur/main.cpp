/*///////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;  //template

int main()
{
	int n;

	return 0;
}/////////////////////////////////////////////////////////////////*/
////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

const int LMAX = 10000;
int cmdp[LMAX];

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i * i < LMAX; i++) {
		if (cmdp[i] == 0) {
			for (int j = i * 2; j < LMAX; j += i) {
				cmdp[j] = i;
			}
		}
	}
	/*for (int i = 2; i < LMAX; i++) {
		cout << cmdp[i] << ' ';
	}*/

	return 0;
}//////////////////////////////////////////////////////////////////