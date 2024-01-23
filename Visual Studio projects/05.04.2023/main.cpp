/****************************************************************
#include <iostream>

using namespace std;  //template

int main()
{
	int n;

	return 0;
}
****************************************************************/
/****************************************************************
#include <iostream>

using namespace std;

int v1[200], v2[200], v3[400];

int main()
{
	int n1, n2, n3, i1, i2, i3, i;
	cin >> n1;
	for (i = 0; i < n1; i++) {
		cin >> v1[i];
	}
	cin >> n2;
	for (i = 0; i < n2; i++) {
		cin >> v2[i];
	}
	i1 = i2 = i3 = 0;
	while (i1 < n1 && i2 < n2) {
		if (v1[i1] <= v2[i2]) {
			v3[i3] = v1[i1];
			i1++;
		}
		else {
			v3[i3] = v2[i2];
			i2++;
		}
		i3++;
	}
	while (i1 < n1) {
		v3[i3] = v1[i1];
		i1++;
		i3++;
	}
	while (i2 < n2) {
		v3[i3] = v2[i2];
		i2++;
		i3++;
	}
	n3 = n1 + n2;
	for (i = 0; i < n3; i++) {
		cout << v3[i] << ' ';
	}

	return 0;
}
****************************************************************/
/****************************************************************
#include <iostream>

using namespace std;

int v1[200], v2[200], v3[400];

int main()
{
	int n1, n2, n3, i1, i2, i3, i;
	cin >> n1;
	for (i = 0; i < n1; i++) {
		cin >> v1[i];
	}
	cin >> n2;
	for (i = 0; i < n2; i++) {
		cin >> v2[i];
	}
	i1 = i2 = i3 = 0;
	while (i1 < n1 && i2 < n2) {
		if (v1[i1] == v2[i2]) {
			v3[i3] = v1[i1];
			i1++;
			i2++;
		}
		else {
			if (v1[i1] < v2[i2]) {
				v3[i3] = v1[i1];
				i1++;
			}
			else {
				v3[i3] = v2[i2];
				i2++;
			}
		}
		i3++;
	}
	while (i1 < n1) {
		v3[i3] = v1[i1];
		i1++;
		i3++;
	}
	while (i2 < n2) {
		v3[i3] = v2[i2];
		i2++;
		i3++;
	}
	n3 = i3;
	for (i = 0; i < n3; i++) {
		cout << v3[i] << ' ';
	}

	return 0;
}
****************************************************************/
/****************************************************************
#include <iostream>

using namespace std;

int v1[200], v2[200], v3[200];

int main()
{
	int n1, n2, n3, i1, i2, i3, i;
	cin >> n1;
	for (i = 0; i < n1; i++) {
		cin >> v1[i];
	}
	cin >> n2;
	for (i = 0; i < n2; i++) {
		cin >> v2[i];
	}
	i1 = i2 = i3 = 0;
	while (i1 < n1 && i2 < n2) {
		if (v1[i1] == v2[i2]) {
			if (v1[i1] != v3[i3 - 1]) {
				v3[i3] = v1[i1];
				i3++;
			}
			i1++;
			i2++;
		}
		else {
			if (v1[i1] < v2[i2]) {
				i1++;
			}
			else {
				i2++;
			}
		}
	}
	n3 = i3;
	for (i = 0; i < n3; i++) {
		cout << v3[i] << ' ';
	}

	return 0;
}
****************************************************************/