#include <fstream>

using namespace std;

int main()
{
	ifstream fin("input.in");
	ofstream fout("output.out");

	int n;
	fin >> n;
	fout << ++n;

	return 0;
}