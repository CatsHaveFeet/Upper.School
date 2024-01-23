#include <iostream>

using namespace std;

int v[100000];

int main()
{
    int n, x, y, q, qi;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x % y > 0)
        {
            v[i] = x / y + 1;
        }
        else
        {
            v[i] = x / y;
        }
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    /*for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }*/
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> qi;
        int s = 0, d = n, m;
        while (s + 1 != d)
        {
            m = (s + d) / 2;
            if (v[m] <= qi)
            {
                s = m;
            }
            else
            {
                d = m;
            }
        }
        cout << s + 1 << '\n';
    }

    return 0;
}