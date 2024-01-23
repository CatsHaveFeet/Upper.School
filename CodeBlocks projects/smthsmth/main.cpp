#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

ifstream fin("sortarecuvinte1.in");
ofstream fout("sortarecuvinte1.out");

char s[200][31];

int main()
{
    int i = 0, n, j = 0;
    while (fin>>s[i]) {
        i++;
    }

    n = i;

    for (i = 0; i <= n; i++) {
        for (j = 0; j < 30; j++) {
            if (strcmp(s[i], s[j])) {
                swap(s[i], s[i + 1][j]);
            }
        }
    }

    for (i = 0; i <= n; i++) {
        fout<<s[i]<<" ";
    }



    return 0;
}
