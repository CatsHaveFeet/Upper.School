/*#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n, a;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<v[j]<<' ';
        }
        cout<<endl;
        int a = v[n - 1];
        for(int h = n - 1; h >= 0; h--){
            v[h + 1] = v[h];
        }
        v[0] = a;
    }
    return 0;
}*/
//////////////////////////////////////////////////////////////////
/*#include <iostream>

int v[1000000];

using namespace std;

int main()
{
    int n, m;
    cin>>n;
    m = n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            for(int h = i; h < n - 1; h++){
                v[h] = v[h + 1];
            }
            v[n - 1] = 0;
            n--;
            i--;
        }
    }
    n = m;
    for(int j = 0; j < n; j++){
        cout<<v[j]<<' ';
    }

    return 0;
}*/
//////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int i,j,n,v[1001],aux;

int main()
{
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin>>v[i];
    }
    for (int i = 1; i < n; i++) {
        for (j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        cout<<v[i]<<' ';
    }
    return 0;
}
