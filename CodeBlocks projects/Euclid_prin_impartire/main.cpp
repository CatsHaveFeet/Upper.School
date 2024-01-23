#include <iostream>

using namespace std;

int main()
{
    int a, b, aux;
    cin>>a>>b;
    while(b != 0){
        aux = a;
        a = b;
        b = aux % b;
    }
    cout<<a;
    return 0;
}
