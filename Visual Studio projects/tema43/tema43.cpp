#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char x[100]  = "";
    for (int i = 0; i < 100; i++) {
        strcat(x, "i");
    }
    ///cout << x;
    ///cout << strstr("abc", "d");
    char a[100];
    cin >> a;
    const char* b = a;
    ///cout << b;
    if (strstr(b, "a") || strstr(b, "e") || strstr(b, "o") || strstr(b, "u")) {
        cout << "NU";
    }
    else {
        /*if (strstr(x, b)) {
            cout << "NU";
        }
        else {*/
            cout << "DA";
        //}
    }

    return 0;
}