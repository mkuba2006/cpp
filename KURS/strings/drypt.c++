#include <iostream>
#include <string>
using namespace std;

int main(){

    string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEVGJHDYVTKFUOMPCJA5Rxznlwebgjhqdyvthfuompciasr"};

    string secret {};
    getline(cin, secret);
    string crypted {};

    for(char c: secret){
        size_t position = alphabets.find(c);
        if(position != string::npos){
            char new_char {key.at(position)};
            crypted += new_char;
        }else{
            crypted += c;
        }
    }
    cout<<crypted<<endl;
    return 0;
}