#include <fstream>

using namespace std;

int main()
{
    ifstream fin("monotona.in");
    ofstream fout("monotona.out");

    int n, x, i = 0, prev_x;
    bool monoton = true, first = true, crescator = false, descrescator = false;
    fin>>n;
    while(i < n){
        fin>>x;
        if(first == true){
            first = false;
        }
        else{
            if(crescator == false && descrescator == false){
                if(x - prev_x > 0){
                    crescator = true;
                }
                else if(x - prev_x < 0){
                    descrescator = true;
                }
            }
            else{
                if(crescator == true && x - prev_x < 0 || descrescator == true && x - prev_x > 0){
                    monoton = false;
                    break;
                }
            }
        }
        prev_x = x;
        i++;
    }
    if(monoton == true){
        fout<<"da";
    }
    else{
        fout<<"nu";
    }

    return 0;
}
