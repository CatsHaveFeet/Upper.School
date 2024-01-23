#include <iostream>

using namespace std;

int main()
{
    int n, cif_max = -1, cif_min = 10;
    cin>>n;
    while(n > 0){
        if(n % 10 > cif_max && n % 2 == 0){
            cif_max = n % 10;
        }
        else if(n % 10 < cif_min && n % 2 == 1){
            cif_min = n % 10;
        }
        n /= 10;
    }
    cout<<cif_max * cif_min;

    return 0;
}
