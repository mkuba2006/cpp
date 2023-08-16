#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    
    int n;
    cout<<"podaj dlugosc:";
    cin>>n;
    //mozesz to pominac i ustawic tablice na [0]
    char tablica[n] {};
    cout<<"podaj slowo:";
    cin>>tablica;
    cout<<strlen(tablica)<<endl;


    string slowo;
    cout<<"podaj :";
    cin>>slowo;
    cout<<slowo.length()<<endl;




    return 0;
}