#include <iostream>

using namespace std;

int main()
{
    struct elev {
        int cod, medie, nra;
    } v[41];
    int cnt = 0, n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i].cod >> v[i].medie >> v[i].nra;
        if (v[i].medie == 10) {
            cnt++;
        }
        sum += v[i].medie;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i].nra < v[j].nra || (v[i].nra == v[j].nra && v[i].cod > v[j].cod)) {
                swap (v[i], v[j]);
            }
        }
    }

    cout << cnt << '\n';
    cout << sum / n << endl;
    cout << v[0].cod << ' ' << v[0].medie << ' ' << v[0].nra << endl;
    cout << v[1].cod << ' ' << v[1].medie << ' ' << v[1].nra << endl;


    return 0;
}
