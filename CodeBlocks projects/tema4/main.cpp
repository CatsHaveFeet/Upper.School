#include <iostream>
using namespace std;
int main()
{
 int a, b, cntr = 0;
 cin>>a>>b; //Nu inteleg eroarea. De ce nu ajunge nici pana aici?
 while(b != a){
    if(b <= 3 && b >1){
        cntr++;
    }
    else{ //Algoritm 100% original
         for (int i = 5; i * i <= b; i = i + 6){
            if (b % i == 0 || b % (i + 2) == 0){
            }
            else{
                cntr++;
            }
         }
    }
    b--;
 }
 cout<<cntr;

 return 0;
}
