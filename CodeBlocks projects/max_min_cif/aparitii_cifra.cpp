#include <iostream>

using namespace std;

void aparitii_cifre(int n, int c, int &ap) { // luam n, ca numarul pe care il vom prelucra si c care va fi cifra aleasa
    while(n) {                               // impreuna cu referita la ap pt a-l schmba si in main
        if (n % 10 == c) {                   // while(n) = while(n > 0)
            ap++;                            // aici nu ne trebuie uc pt ca folosim modulo doar o data per repetitie
        }                                    // vedem daca ultima cifra a lui n = c si crestem ap cu 1
        n /= 10;                             // eliminam ultima cifra a lui n pt a citi urmatoarea cifra in urmatoarea repetitie
    }
}

int main()
{
    int ap = 0 ;                            // declaram ap ca 0, in caz ca ap nu se schimba in functie, adica in num nu se gaseste cifra dorita
    aparitii_cifre(103243, 3, ap);          // apelam functia de mai sus cu parametrii doriti (codul incepe sa ruleze intotdeauna in main, oriunde e pozitionat)
    cout << ap;                             // printam in consola valoarea ap dupa apelul functiei pt a ne verifica !!!NU RAMANE IN CODUL FINAL!!!


    return 0;
}
