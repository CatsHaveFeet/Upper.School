/*
#include <iostream>

using namespace std;

int v[100];

int main()  //Numarare6
{
    int n, i, max_val = 0, min_val, cntr = 0;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>v[i];
        if(v[i] > max_val){
            max_val = v[i];
        }
    }
    min_val = max_val;
    i = 0;
    while(i < n){
        if(v[i] < min_val){
            min_val = v[i];
        }
        i++;
    }
    i = 0;
    while(i < n){
        if(v[i] == max_val - min_val){
            cntr++;
        }
        i++;
    }
    cout<<cntr;

    return 0;
}
*/

/*/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

bool v[100];

int main()
{
    int n, j, z, cntr = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0; i < n; i++){
        j = 0;
        while(v[j] == false && j < n){  //Merry Cristmas
            j++;
        }
        z = j + 1;
        while(z < n){
            if(v[z] == true){
                cntr++;
            }
            z++;
        }
        v[j] = false;

    }
    cout<<cntr;

    return 0;
}

*//////////////////////////////////////////////////////////////////////////////

/*
#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n, x, i;
    cin>>n>>x;
    for(i = 0; i < n; i++){
        cin>>v[i];
    }
    i = 0;
    while(i < n && v[i] != x){
        i++;
    }
    cout<<i;

    return 0;
}
*/

/*/////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n, cntr, x;
    bool par = true;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        x = v[i];
        cntr = 0;
        while(x > 0){        //VerificareNrParCifre
            x /= 10;
            cntr++;
        }
        if(cntr % 2 == 1){
            par = false;
        }
    }
    if(par == false){
        cout<<"NU";
    }
    else{
        cout<<"DA";
    }

    return 0;
}

*//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
