#include <fstream>
#include <cstring>

using namespace std;

int inaltimi[150];
char nume[150][100][50];

int main()
{
    ifstream fin("serbare1.in");
    ofstream fout("serbare1.out");

    int k, inaltimiDistincte = 0;
    fin >> k;
    fin.get();
    for (int i = 0; i < k; i++) {
        int lung = 0;
        char numeTemp[50];
        char lit;
        bool space1 = true, space2 = true;
        fin.get(lit);
        //fout << lit;
        for (int j = 0; space2; j++) {
            lung++;
            numeTemp[j] = lit;
            fin.get(lit);
            if (lit == ' ' && space1 == false) {    ///atoi
                space2 = false;
            }
            if (lit == ' ' && space1) {
                space1 = false;
            }
            //fout << lit;
        }
        int x;
        fin >> x;
        //fout << x;
        if (inaltimi[x] == 0) {
            inaltimiDistincte++;
        }
        inaltimi[x]++;
        for (int j = 0; j < lung; j++) {
            nume[x][inaltimi[x] - 1][j] = numeTemp[j];
            //fout << nume[x][inaltimi[x] - 1][j];
        }
        fin.get();
    }
    //fout << '\n';
    fout << inaltimiDistincte << '\n';
    int j = 150;
    for (int i = 0; i < inaltimiDistincte; i++) {
        while (inaltimi[j] == 0) {
            j--;
        }
        fout << inaltimi[j] << ' ';
        for (int k = 0; k < inaltimi[j]; k++) {
            for (char m = 0; m < 100; m++) {
                for (int n = 0; nume[j][k][0] != 0; n++) {
                    if (strcmp(nume[j][k], m) <= 0) {
                        if (strcmp(nume[j][k][0], nume[j][k + 1][0])){
                            nume[j][k] = m + 1;
                        }
                        else {
                            nume[j][k + 1] = m + 1;
                        }
                    }
                }
            }
            for (int o = 100; o >= 0; o--) {
                if (nume[j][o][0]){
                    for (int l = 0; nume[j][k][l] != 0; l++) {
                        fout << nume[j][k][l];
                    }
                }
            }
            fout << ' ';
        }
        fout << '\n';
        j--;
    }

    return 0;
}
