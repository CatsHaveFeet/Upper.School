#include <iostream>
namespace std;

int main() {
    int a, b, c, s, z, u, nr;
    cin>>a>>b>>c;
    s = a / 100;
    z = b / 10 % 10;
    u = c % 10;
    nr = s*100 + z*10 +u;
    cout<<nr;
    return 0;
}