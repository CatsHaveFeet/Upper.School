#include <iostream>

using namespace std;

int main()
{
    long long int n, a = -1, b = -1;
    bool repetat = true;
    cin>>n;
    while(n > 0){ //Complexitatea: O(nr de cifre a lui n)
        if(a != -1 && b != -1 && n % 10 != a && n % 10 != b){
            repetat = false;
        }
        else if(a == -1){
            a = n % 10;
        }
        else if(b == -1 && n % 10 != a){
            b = n % 10;
        }
        n /= 10;
    }
    if(repetat == true){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }

    return 0;
}
