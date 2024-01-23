#include <iostream>

using namespace std;

int cmsb(int n)
{
    int cntr = 0;
    bool found = false;
    int p2 = 1;
    while (p2 * 2 < n)
    {
        p2 *= 2;
        //cout << p2 << endl;
    }
    //cout << "done\n";
    while (p2 >= 1)
    {
        if (found == true)
        {
            cntr++;
        }
	    if (n / p2 == 1)
	    {
            found = true;
	    }
        //cout << n / p2;
        n = n % p2;
        p2 /= 2;
        //cout << p2 << endl;
    }
    //cout << '\n';
    return cntr;
}

int main()
{
    int n;
    cin >> n;
    cout << cmsb(n);

    return 0;
}