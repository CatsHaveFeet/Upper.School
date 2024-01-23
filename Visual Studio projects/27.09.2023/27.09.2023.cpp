/*///////////////////////////////////////////////////////////
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("sbvoc.in");
    ofstream fout("sbvoc.out");

    int lmax = 0, ltemp = 0;
    char x;
    fin.get(x);
    while (x != '\n') {
        if (x != ' ') {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
                ltemp++;
            }
            else {
                if (ltemp > lmax) {
                    lmax = ltemp;
                }
                ltemp = 0;
            }
        }
        fin.get(x);
    }
    lmax = max(lmax, ltemp);
    fout << lmax;

    return 0;
}
*////////////////////////////////////////////////////////////
/*///////////////////////////////////////////////////////////
#include <fstream>

using namespace std;

int v[26];

int main()
{
    ifstream fin("sbvoc.in");
    ofstream fout("sbvoc.out");

    int apmax = 0;
    char x;
    fin.get(x);
    while (x != '\n') {
        if (x >= 'a' && x <= 'z') {
            v[x - 'a']++;
        }
        if (x >= 'A' && x <= 'Z') {
            v[x - 'A']++;
        }
        fin.get(x);
    }
    for (int i = 0; i < 26; i++) {
        if (v[i] > 0) {
            fout << (char)(i + 'a') << " ---> " << v[i];
        }
    }

    for (int ap = 0; ap <= apmax; ap++) {
        for (int i = 0; i < 26; i++) {
            fout << (char)(i + 'a') << ' ';
        }
    }

    return 0;
}
 *////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////
 #include <iostream>

 using namespace std;

 int v[2000000];

 int main()
 {
     int n;

     return 0;
 }
  ////////////////////////////////////////////////////////////