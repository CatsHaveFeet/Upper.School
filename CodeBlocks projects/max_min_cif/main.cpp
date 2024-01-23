#include <iostream>

using namespace std;

void max_min_cif(int n, int &ma, int &mi) { // luam n, ca numarul pe care il vom
    while (n) {                             // impreuna cu referite la ma si mi pt a le schmba si in main
        int uc = n % 10;                    // while(n) = while(n > 0)
        if (uc > ma) {                      // luam uc ca ultima cifra a lui n pt a nu folosi % repetat
            ma = uc;                        // vedem daca uc este mai mare decat ma
        }                                   // il inlocuim pe ma cu valoarea lui uc daca este
        if (uc < mi) {                      // la fel pt mi dar ne uitam daca uc este mai mic
            mi = uc;
        }
        n /= 10;                            // eliminam ultima cifra a lui n pt a citi-o urmatoarea cifra in urmatoarea repetitie
    }
}

int main()
{
    int ma = -1, mi = 10;                   // declaram ma ca -1 pt ca o cifra nu poate fi atat de mica intr-un numar, la fel pt mi
    max_min_cif(41739, ma, mi);             // apelam functia de mai sus cu parametrii doriti (codul incepe sa ruleze intotdeauna in main, oriunde e pozitionat)
    cout << ma << ' ' << mi;                // printam in consola valorile dupa apelul functiei !!!NU RAMANE IN CODUL FINAL!!!

    return 0;
}
