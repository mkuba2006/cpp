#include <iostream>

using namespace std;

int main() {
    int blok=0,prevChar;
    string bin;
    cin>>bin;
    
    for(int i=0; i<bin.length();i++){
       if (bin[i] != prevChar) {
            blok++;
            prevChar = bin[i];
        }
    }
    cout<<blok;

    return 0;
}
