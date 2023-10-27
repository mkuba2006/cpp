#include <iostream>
using namespace std;

int iteracja(int n){
    int wynik = 1;
    for(int i =1;i<=n;i++){
        wynik*=2;
    }
    return wynik;
}


int main(){
    int n;
    cout<<"n:";
    cin>>n;
    cout<<rek(n);
    
    return 0;
}
