#include <iostream>
#include <cstring>

using namespace std;
    struct calator {
        char[51] prenume, nume;
        int pen;
    } v[101], temp;

int main()
{
    int n, c, m = 0;
    bool bp;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> temp[i].prenume >> temp[i].nume >> bp;
        bool gasit = false;
        for (int j = 0; j < m; j++) {
            if (strcmp(v[j].prenume, temp.prenume) == 0 && strcmp(v[j]nume, temp.nume) == 0) {
                gasit = true;
                if (bp == 0) {
                    v[j].pen++;
                }
            }
        }
        //  if (gasit )
    }

    return 0;
}

































































































































































































































/* EFF OFF >:(
WHAT DA CRUD ?!?!?!?!
CHEESE IS RICE !!!!
GO FUDGE YOURSELF !!!
YOU MOWON !!!! */
