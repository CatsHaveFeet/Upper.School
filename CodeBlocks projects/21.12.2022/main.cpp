#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    switch(x % 4){
        case 0:
            cout<<6;
            break;
        case 1:
            cout<<2;
            break;
        case 2:
            cout<<4;
            break;
        case 3:
            cout<<8;
            break;
    }
    return 0;
}
