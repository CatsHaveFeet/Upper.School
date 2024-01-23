#include <iostream>

using namespace std;

int v[100]; /// are max 100 de elemente
            /// de la 0 --> 99 0

int main()
{
    v[6] = 8;
    v[3] = v[6] + 4;
    v[3]++;
    cout<<v[3];

    return 0;
}
