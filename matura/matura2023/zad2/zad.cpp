#include <iostream>
#include <fstream>
#include <bitset>

using namespace std;


int zamiana(string s){
    bitset<32> binaryNumber(s);
    int dec = binaryNumber.to_ulong();
    return dec;
}


int main() {
    ifstream plik;
    plik.open("bin.txt");

    int ile=0;
    string s, naj;

    while(!plik.eof()){
        plik>>s;
        int n=0;
        int blok=0;
        char prevChar = '\0';
        for(int i=0; i<s.length();i++){
            if (s[i] != prevChar) {
                blok++;
                prevChar = s[i];
            }
        }
        if(blok<=2){
            ile++;
        }
        if(zamiana(s) > zamiana(naj)){
            naj = s;
        }

    }

    cout<<"ile: "<<ile<<endl;
    cout<<"naj: "<<naj;






    plik.close();
    return 0;
}
