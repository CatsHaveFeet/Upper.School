#include <iostream>

using namespace std;

int main()
{
    char a, b;
    string n;
    cin>>a>>b;
    if(int(a)>57||int(a)<48||int(b)>57||int(b)<48){
        cout<<"Trebuie introduse doua cifre";
        return 1;
    }
    if(a>b){
        n += a;
        n += b;
    }else{
        n += b;
        n += a;
    }
    cout<<n;
    return 0;
}
