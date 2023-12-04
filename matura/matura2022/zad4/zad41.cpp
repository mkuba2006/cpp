#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream plik("liczby.txt");
    string s;

    int amount = 0;
    string f = "";

    if(plik.is_open()){
        int index = 1;
        while (plik >> s) {
            int len = s.length();
            char first = s[0];
            char last = s[len-1];
            if(first==last){
                amount++;
                if(f == ""){
                    f=s;
                }
                
            }

            cout<< s <<" - "<< first << " - "<< last <<endl;

            index++;
        }
    }
    cout<<amount<<endl;
    cout<<f<<endl;
    plik.close();

    return 0;
}


