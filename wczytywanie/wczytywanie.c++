#include <iostream>
#include <fstream>
using namespace std;


// int main()
// {
//     ifstream plik;
//     string s;

//     plik.open("plik.txt");
//     while(!plik.eof()){
//         plik>>s;
//         cout<<s<<endl;
//     }

//     plik.close();
// }





int main()
{
    ifstream plik("plik.txt");
    ofstream out("out.txt");
    string s;



    while(!plik.is_open()){
        plik>>s;
        cout<<s<<endl;
    }


    while(plik>>s){
        out<<s;
    }

    plik.close();
    out.close();
}
