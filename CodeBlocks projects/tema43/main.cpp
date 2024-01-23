#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char x[100]  = "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
    /*for (int i = 0; i < 100; i++) {
        strcat(x, "i"); ///am generat un string de 100 de i-uri :))
    }*/
    ///cout << x << endl;
    char a[100];
    cin >> a;
    const char* b = a;
    ///cout << b;
    if (strstr(b, "a") || strstr(b, "e") || strstr(b, "o") || strstr(b, "u")) {
        cout << "NU";
    }
    else {
        if (strstr(x, b)) {
            cout << "NU";
        }
        else {
            cout << "DA";
        }
    }

    return 0;
}
