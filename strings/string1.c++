#include <iostream>
#include <string>
using namespace std;

int main(){

    string s {"Kuba"};
    for(int c: s){
        cout<<c<<endl;
    }

    for(char c: s){
        cout<<c<<endl;
    }

    return 0;
}