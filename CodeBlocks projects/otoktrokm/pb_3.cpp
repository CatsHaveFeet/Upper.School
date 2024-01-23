#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[101], *c;
    bool ok = false;
    cin.get(a, 101);
    c = strtok(a, " ");
    while (c) {
        if (strstr(c, "DO") || strstr(c, "RE") || strstr(c, "MI") || strstr(c, "FA") || strstr(c, "SOL") || strstr(c, "LA") || strstr(c, "SI")){
            cout << c << endl;
            ok = true;
        }
        //cout << c << " ";
        c = strtok(0, " ");
    }
    if (ok == false) {
        cout << "nu exista";
    }

    return 0;
}
