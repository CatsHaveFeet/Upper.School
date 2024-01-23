#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if (a >= b) {
        if (c >= d){
            cout<<"Ionel da "<<c + a<<" lei in loc de "<<d + b<<" lei";
        }
        else {
            cout<<"Ionel da "<<d + a<<" lei in loc de "<<c + b<<" lei"
        }
    }
    else {
        if (c >= d) {
            cout<<"Ionel da "<<c + b<<" lei in loc de "<<d + a<<" lei"
        }
        else {
            cout<<"Ionel da "<<d + b<<" lei in loc de "<<c + a<<" lei"
        }
    }
    return 0;
}
