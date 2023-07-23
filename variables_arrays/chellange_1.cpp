#include <iostream>

using namespace std;
int main(){
    int cents, dollars, quarters, dimes, nickels, pennies ;
    cout<<"podaj ile masz centów: ";
    cin>>cents;

    dollars = cents / 100;
    cents %=100;
    quarters = cents / 25;
    cents %=25;
    dimes = cents / 10;
    cents %=10;
    nickels = cents / 5;
    cents %=5;
    pennies = cents;

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
}
