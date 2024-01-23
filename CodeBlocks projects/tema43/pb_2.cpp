#include <iostream> ///dupa multe peripetii pe stack overflow...
#include <cstring>  ///am scos acest spaghetti code
#include <sstream>  ///macar pbinfo aproba :))
                    ///si am inteles ce fac toate functile acestea, nu am dat numai copy-paste ;D

using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' or ch == 'e'
            or ch == 'i' or ch == 'o'
            or ch == 'u');
}

bool containsOnlyVowels(const string& word) {
    for (char c : word) {
        if (!isVowel(c)) {
            return false;
        }
    }
    return true;
}

void areWordsOnlyVowels(const string& sentence) {
    istringstream iss(sentence);
    string word;

    while (iss >> word) {
        if (containsOnlyVowels(word)) {
            cout << word << '\n';
        }
    }
}

int main()
{
    string input;
    getline(cin, input);
    areWordsOnlyVowels(input);

    return 0;
}

/*int main()
{
    char a[255], sep[] = " ";
    char* cuv;
    cin.get(a, 255, '\n');
    cuv = strtok(a, sep);                   ///ramasitele incercarii mele sa o rezolv cu strtok si etc.
    while (cuv) {
        string str(cuv);
        if (isvalid(x)) {
            cout << cuv << '\n';
        }
        /*if (strstr(cuv, "a") || strstr(cuv, "e") || strstr(cuv, "i") || strstr(cuv, "o") || strstr(cuv, "u")) {
            cout << cuv << '\n';
        }/
        cuv = strtok(0, sep);
        ///cout << cuv << '\n';
    }


    return 0;
}*/

