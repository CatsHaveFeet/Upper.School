#include <iostream>

using namespace std;

int main()
{
    long long int n, a = 0, b = 0;
    float m;
    cin>>n;
    for(int i = 0; i<18; i++){
        if(n%2 == 1){
            a = a + n%10;
            b++;
        }
        n = n / 10;
    }
    m = a / b;
    cout<<m;

    return 0;
}
