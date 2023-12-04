#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file;
    file.open("pi.txt");

    int ile=0, n ,pop;
    int a[100];
    for(int i = 0; i<100;i++){
        a[i]= 0;
    }

    file>>pop;
    while(!file.eof()){
        file>>n;
        if(pop==9 && n>0){
            ile++;
        }
        a[pop*10+n]++;
        pop=n;
    }

    int max=a[0], min=a[0] , cmax=a[0], cmin=a[0];
    for(int i = 0; i<100;i++){
        if(a[i]>max){
            max=a[i];
            cmax=i;
        }
        if(a[i]<min){
            min=a[i];
            cmin=i;
        }
    }
    cout<<"min: "<<cmin<<" "<<min<<endl;
    cout<<"max: "<<cmax<<" "<<max<<endl;

    cout<<ile<<endl;
    file.close();
    return 0;
}
