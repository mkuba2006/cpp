#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
using namespace std;
int main(){

    char name[100] {}; //max 100 liter
    cout<<"Jak masz na imie: ";
    cin>>name;
    cout<<"\ntwoje imie: "<<name;
    cout<<"\ntwoje imie ma liter: "<<strlen(name)<<endl;;
    for(int i = 0; i<strlen(name);i++){
        cout<<name[i]<<endl;
    }

    ///////2 test/////////////////////////////
    cout<<"----------------------"<<endl;
    int n;
    cout<<"podaj dlugosc: ";
    cin>>n;
    char litera[n];
    for (int i = 0; i < n; i++){
        cout<<"podaj litere: ";
        cin>>litera[i];
    }

    for (int i = 0; i < n; i++){
        cout<<i<<": "<<litera[i]<<endl;
    }

    return 0;
}