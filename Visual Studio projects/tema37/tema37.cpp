#include <iostream>

using namespace std;

const int LIM_MAX = 99999;
char vn[LIM_MAX];
char vm[(LIM_MAX / 2) + 1];

int main()
{
    int n, m, i, j = 0, ap = 0;
    char x;
    cin >> n >> m; 
    cin.get();
    cin.get(x);
    i = 0;
    while (x != '\n') {
        vn[i] = x;
        i++;
        cin.get(x);
    }
    i = 0;
    cin.get(x);
    while (x != '\n') {
        vm[i] = x;
        i++;
        cin.get(x);
    }
    vm[i] = '!';
/*    for (int k = 0; k < n; k++) { //test vector vn
        cout << vn[k];
    }
    cout << '\n';
    for (int k = 0; k < m + 1; k++) { //test vector vm
        cout << vm[k];
    }*/
    for (i = 0; i < n + 1; i++) {
        if (vm[j] == '!') {
            ap++;
            j = 0;
        }
        if (vn[i] == vm[j]) {
            j++;
        }
        else {
           if (vn[i] != vm[0]) {
               j = 0;
           }
        }
    }
    if (ap != 0) {
        cout << "A castigat Bianca!\n" << ap;
    }
    else {
        cout << "A castigat Alina!";
    }

    return 0;
}
/*20 5
12697217293669721761 //test sequence
69721*/
//50% din problema asta a fost debugging jur...