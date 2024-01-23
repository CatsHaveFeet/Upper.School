#include <fstream>

using namespace std;

int v[1000000];

int main()
{
    ifstream fin("intervale6.in");
    ofstream fout("intervale6.out");

    int n, cntr = 0, x, interval_tracker = 0;
    bool interval_status = true;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> v[i];
    }
    while (fin >> x) {
        for (int i = 0; i < n; i++) {
            if (x == v[i]) {
                interval_status = false;
                i = n;
            }
        }
        if (interval_tracker == 2) {
            if (interval_status == true) {
                cntr++;
            }
            interval_tracker = 0;
            interval_status = true;
        }
        interval_tracker++;
    }
    fout << cntr;

    return 0;
}