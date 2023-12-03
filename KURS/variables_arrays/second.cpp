#include <iostream>

using namespace std;
int main(){
    int num1, num2, num3, sum {};
    const int total {3};
    cout<< "podaj 3 liczby: " ;
    cin>> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;

    double sr = static_cast<double> (sum)/total; 

    cout<<"these are your numbers: " << num1 << " " << num2 << " " <<num3<<endl;
    cout<< "suma: " << sum << endl;
    cout<< "średnia: " << sr << endl;

}
