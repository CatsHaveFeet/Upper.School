#include <fstream>

using namespace std;

int main()
{
    ifstream fin("secvmax.in");
    ofstream fout("secvmax.out");

    int n, x, i = 0, LungMax = 0, LungTemp = 0, a = 0, b = 0, c = 0, AStart = 0, BStart = 0, CStart = 0, AEnd = 0, BEnd = 0, CEnd = 0, LungA = 0, LungB = 0, LungC = 0;
    bool AOpen = true, BOpen = true, COpen =true;
    fin>>n;
    while(i < n){
        fin>>x;
        if(x % 2 == 0){
            if(AOpen == true){
                if(a == 0){
                    AStart = i + 1;
                }
                a = a + x;
            }
            else if(BOpen == true){
                if(b == 0){
                    BStart = i + 1;
                }
                b = b + x;
            }
            else{
                if(c == 0){
                    CStart = i + 1;
                }
                c = c + x;
            }
            LungTemp++;
        }
        else{
            if(a == 0){
            }
            else if(AOpen == true){
                LungA = LungTemp;
                if(LungTemp > LungMax){
                    LungMax = LungTemp;
                }
                AEnd = i + 1;
                AOpen = false;
            }
            else if(BOpen == true){
                if(LungTemp > LungMax){
                    LungMax = LungTemp;
                }
                BEnd = i + 1;
                BOpen = false;
            }
            else if(COpen == true){
                if(LungTemp > LungMax){
                    LungMax = LungTemp;
                }
                CEnd = i + 1;
                COpen == false;
            }
            LungTemp = 0;
        }
        if(LungA < LungMax && AOpen == false){
            a = 0;
            LungA = 0;
            AStart = 0;
            AEnd = 0;
            AOpen = true;
        }
        else if(LungB < LungMax && BOpen == false){
            b = 0;
            LungB = 0;
            BStart = 0;
            BEnd = 0;
            BOpen = true;
        }
        else if(LungC < LungMax && COpen == false){
            c = 0;
            LungC = 0;
            CStart = 0;
            CEnd = 0;
            COpen = true;
        }
        i++;
    }
    if(c == 0){
        if(b == 0){
            if(a == 0){
                fout<<"Nu am gasit nici un numar par";
            }
            else{
                fout<<AStart<<' '<<AEnd;
            }
        }
        else if(a > b){
            fout<<AStart<<' '<<AEnd;
        }
        else{
            fout<<BStart<<' '<<BEnd;
        }
    }
    else if(a > b && a > c){
            fout<<AStart<<' '<<AEnd;
    }
    else if(b > a && b > c){
            fout<<BStart<<' '<<BEnd;
    }
    else if(c > a && c > b){
            fout<<CStart<<' '<<CEnd;
    }

    return 0;
}
